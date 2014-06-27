//
// Solution to Game BlockPuzzle
//
// Author: Mingjie Li (limingjie0719@gmail.com)
// Date  : Aug 27, 2013
//
// Compiled successfully with g++ 4.8.1
//
#include <iostream>

#include "block.hpp"
#include "board.hpp"

int main()
{
    Blocks bs;
    Board board(5, 6);

    bs.push_back(&(*(new Block()))("***"));
    bs.push_back(&(*(new Block()))("***| *| *"));
    bs.push_back(&(*(new Block()))("**|**"));
    bs.push_back(&(*(new Block()))("*|**"));
    bs.push_back(&(*(new Block()))(" **| *|**"));
    bs.push_back(&(*(new Block()))("*|*"));
    bs.push_back(&(*(new Block()))("***|  *"));
    bs.push_back(&(*(new Block()))("*|**| *"));

    std::cout << "---------- Puzzle ----------" << std::endl;

    if (!board.Unblock(bs))
    {
        std::cout << "No solution!" << std::endl;
    }

    for (auto i = bs.cbegin(); i != bs.cend(); i++)
    {
        delete (*i);
    }

    return 0;
}
