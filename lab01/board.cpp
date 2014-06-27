//
// Solution to Game BlockPuzzle
//
// Author: Mingjie Li (limingjie0719@gmail.com)
// Date  : Aug 27, 2013
//
// Compiled successfully with g++ 4.8.1
//
#include <iostream>
#include <iomanip> // setw
#include <algorithm> // sort

#include "board.h"

Board::~Board()
{
    delete data;
}

// Set cell (x, y) = 1
inline void Board::SetCell(size_t x, size_t y)
{
    count_setcell++;
    (*data)[y * width + x] = 1;
}

// Check if cell (x, y) is empty
inline bool Board::CheckCell(size_t x, size_t y)
{
    count_checkcell++;
    return ((*data)[y * width + x] == 0);
}

// Set cell (x, y) = 0
inline void Board::ClearCell(size_t x, size_t y)
{
    (*data)[y * width + x] = 0;
}

// Put block on board starts from cell (x, y)
// return true if ok
// return false if not fit.
bool Board::SetBlock(Block *b, size_t x, size_t y)
{
    if (!CheckBlock(b, x, y))
    {
        return false;
    }

    const BlockData* d = b->GetData();
    for(auto i = d->cbegin(); i != d->cend(); i++)
    {
        SetCell(x + i->first, y + i->second);
    }

    count_setblock++;
    return true;
}

bool Board::CheckBlock(Block *b, size_t x, size_t y)
{
    count_checkblock++;

    if (b->width + x > width || b->height + y > height)
        return false;

    const BlockData* d = b->GetData();
    for(auto i = d->cbegin(); i != d->cend(); i++)
    {
        if (!CheckCell(i->first + x, i->second + y))
        {
            return false;
        }
    }

    return true;
}

// Clear the block from board
void Board::ClearBlock(Block *b, size_t x, size_t y)
{
    const BlockData* d = b->GetData();
    for(auto i = d->cbegin(); i != d->cend(); i++)
    {
        ClearCell(x + i->first, y + i->second);
    }
}

// This is the core solution
bool Board::RecursiveSetBlock(Blocks &bs, size_t block_index)
{
    Block* block = bs[block_index];

    size_t xmax = width - block->width;
    size_t ymax = height - block->height;

    for (size_t x = 0; x <= xmax; x++)
    {
        for (size_t y = 0; y <= ymax; y++)
        {
            // if there is a place for block, process.
            if (SetBlock(block, x, y))
            {
                // If the block is the last one, solution found.
                if (block_index == bs.size() - 1)
                {
                    std::cout << "Step: Put block " << block_index << " at [" << x << ", " << y << "]" << std::endl;
                    block->Print(width, height, x, y, "Block " + std::to_string(block_index));
                    return true;
                }

                // If not the last one, process other blocks.
                if (RecursiveSetBlock(bs, block_index + 1))
                {
                    // If all other blocks are positioned correctly, solution found.
                    std::cout << "Step: Put block " << block_index << " at [" << x << ", " << y << "]" << std::endl;
                    block->Print(width, height, x, y, "Block " + std::to_string(block_index));
                    return true;
                }
                else
                {
                    // If not able to found a solution for other blocks, rollback current block,
                    // and continually find next available position for current block.
                    ClearBlock(block, x, y);
                    continue;
                }
            }
        }
    }

    return false;
}

// Start solving the problem.
bool Board::Unblock(Blocks bs)
{
    count_setblock = 0;
    count_checkblock = 0;
    count_setcell = 0;
    count_checkcell = 0;

    // Sort Blocks by block weight
    std::sort(bs.begin(), bs.end(), [](Block *a, Block *b)
    {
        return (a->weight > b->weight);
    });

    for (auto i = bs.cbegin(); i != bs.cend(); i++)
    {
        (*i)->Print("Block " + std::to_string(i - bs.cbegin()));
    }

    // Find solution
    bool result = RecursiveSetBlock(bs, 0);

    std::cout << "count_setblock   = " << count_setblock   << std::endl
              << "count_checkblock = " << count_checkblock << std::endl
              << "count_setcell    = " << count_setcell    << std::endl
              << "count_checkcell  = " << count_checkcell  << std::endl;

    return result;
}

void Board::Print(std::string title)
{
    std::cout << title << std::endl << "   ";

    for (size_t i = 0; i < width; i++)
    {
        std::cout << std::setw(2) << i;
    }

    for (size_t i = 0; i < width * height; i++)
    {
        if (i % width == 0)
        {
            std::cout << std::endl << std::setw(2) << i / width << ' ';
        }

        if ((*data)[i])
        {
            std::cout << "[]";
        }
        else
        {
            std::cout << "__";
        }
    }

    std::cout << std::endl << std::endl;
}
