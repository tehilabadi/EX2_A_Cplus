#include <iostream>
#include <stdexcept>
using namespace std;
#include "Direction.hpp"
#include "Board.hpp"
using ariel::Direction;
// using ariel::Board;
namespace ariel{

    Board::Board(){
        hight = 2;
        width = 2;
    
    }
    void Board::setH(int hightY){
        hight = hightY;
    }

    void Board::setW(int widthY){
        width = widthY;
    }

    void Board::post(unsigned int raw, unsigned int cul, Direction Dir, string post){}
    string Board::read(unsigned int raw, unsigned int cul, Direction Dir, int numOfChar ){
        return "magic";
    }
    void Board::show(){}

}


