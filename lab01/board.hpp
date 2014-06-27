//
// Solution to Game BlockPuzzle
//
// Author: Mingjie Li (limingjie0719@gmail.com)
// Date  : Aug 27, 2013
//
// Compiled successfully with g++ 4.8.1
//
#ifndef __BOARD_H__
#define __BOARD_H__

#include <vector>
#include <string>

#include "block.hpp"

typedef std::vector<size_t> BoardData;

class Board
{
public:
    Board(size_t width, size_t height);
    ~Board();

    bool Unblock(Blocks bs);
    void Print(std::string title = "Board");
    bool SetBlock(Block *b, size_t x, size_t y);

private:
    void SetCell(size_t x, size_t y);
    bool CheckCell(size_t x, size_t y);
    void ClearCell(size_t x, size_t y);
    bool CheckBlock(Block *b, size_t x, size_t y);
    void ClearBlock(Block *b, size_t x, size_t y);
    bool RecursiveSetBlock(Blocks &bs, size_t block_index);

    size_t width;
    size_t height;

    size_t count_setblock;
    size_t count_checkblock;
    size_t count_setcell;
    size_t count_checkcell;

    BoardData *data;
};

#endif // __BOARD_H__
