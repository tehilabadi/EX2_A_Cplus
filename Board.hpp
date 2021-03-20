#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Direction.hpp"

namespace ariel{

    class Board{
    int hight = 2;
    int width = 2;

    public:
    Board();
    void setH(int hightY);
    void setW(int widthY);
    void post(unsigned int raw, unsigned int cul, Direction Dir, string post);
    string read(unsigned int raw, unsigned int cul, Direction Dir, int numOfChar );
    void show();

    };

}
#endif