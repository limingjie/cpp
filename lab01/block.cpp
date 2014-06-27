//
// Solution to Game BlockPuzzle
//
// Author: Mingjie Li (limingjie0719@gmail.com)
// Date  : Aug 27, 2013
//
// Compiled successfully with g++ 4.8.1
//
#include "block.h"
#include "board.h"

Block::Block()
{
    data = new BlockData();

    width = 0;
    height = 0;
    weight = 0;
}

Block::~Block()
{
    delete data;
}

// Compose a block
Block& Block::operator()(size_t x, size_t y)
{
    data->push_back(std::make_pair(x, y));

    if (x >= width) width = x + 1;
    if (y >= height) height = y + 1;

    // B - 2693,         , D - 5956
    // weight = height * height * width * 1.0 / data->size();

    // B - 1457, C - 3995, D - 4387
    // weight = data->size() * width * height * height;

    // B - 3017, C - 2185, D - 3365
    weight = data->size() * width * height;

    return (*this);
}

// Compose a block
Block& Block::operator()(std::string cells, size_t y)
{
    size_t x = 0;

    for (auto i = cells.cbegin(); i != cells.cend(); i++)
    {
        if ((*i) == '*')
        {
            (*this)(x, y);
        }
        else if ((*i) == '|')
        {
            x = 0;
            y++;

            continue;
        }

        x++;
    }

    return (*this);
}

const BlockData* Block::GetData() const
{
    return (const BlockData *) data;
}

void Block::Print(std::string title)
{
    Board b(width, height);
    b.SetBlock(this, 0, 0);
    b.Print(title);
}

void Block::Print(size_t board_width, size_t board_height, size_t block_x, size_t block_y, std::string title)
{
    Board b(board_width, board_height);
    b.SetBlock(this, block_x, block_y);
    b.Print(title);
}
