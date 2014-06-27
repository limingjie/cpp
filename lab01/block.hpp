//
// Solution to Game BlockPuzzle
//
// Author: Mingjie Li (limingjie0719@gmail.com)
// Date  : Aug 27, 2013
//
// Compiled successfully with g++ 4.8.1
//
#ifndef __BLOCK_H__
#define __BLOCK_H__

#include <vector>
#include <string>

typedef std::vector<std::pair<size_t, size_t>> BlockData;

class Block
{
public:
    Block();
    ~Block();

    Block& operator()(size_t x, size_t y);
    Block& operator()(std::string x, size_t y = 0);

    void Print(std::string title = "Block");
    void Print(size_t board_width, size_t board_height, size_t x, size_t y, std::string title = "Block");
    const BlockData* GetData() const;

    size_t width;
    size_t height;
    double weight;

private:

    BlockData *data;
};

typedef std::vector<Block *> Blocks;

#endif // __BLOCK_H__
