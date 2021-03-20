#include "doctest.h"
using namespace doctest;
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Direction.hpp"
#include "Board.hpp"
using ariel::Direction;
using ariel::Board;

TEST_CASE("horizen") {
    Board board = Board();
    Direction horizen = Direction();
    CHECK_NOTHROW(board.read(0,0,horizen,2));
    CHECK_NOTHROW(board.read(1,0,horizen,2));//you can read an empty board
    CHECK(board.read(1,0,horizen,2)=="__");//horizenl
    CHECK_NOTHROW(board.post(4,4,horizen,"1cheack"));//you can post horizenial
    CHECK(board.read(4,3,horizen,2)=="_1");//you can read what you posted
    CHECK_NOTHROW(board.post(4,4,horizen,"2number"));//you can override a post
    CHECK(board.read(4,3,horizen,2)=="_2");
    CHECK_NOTHROW(board.post(4,4,horizen,"3c"));//you can override a part of a post from the top
    CHECK(board.read(4,3,horizen,2)=="_3");
    CHECK_NOTHROW(board.post(4,10,horizen,"4"));//you can override a part of a post from the tail
    CHECK(board.read(4,10,horizen,1)=="4");
    CHECK(board.read(4,4,horizen,6)=="3cuber4");
    CHECK_NOTHROW(board.post(4,5,horizen,"4"));//you can override a part of a post in the middle
    CHECK(board.read(4,4,horizen,6)=="34uber4");
    CHECK_NOTHROW(board.post(10,10,horizen,"_"));//you can post "_" char
    CHECK(board.read(10,10,horizen,1)=="_");
}
TEST_CASE("vertical"){
    Direction vertical = Direction();
    Board board = Board();
    CHECK(board.read(0,1,vertical,2)=="__");//vertical
    CHECK_NOTHROW(board.post(2,2,vertical,"tehila"));//you can post vertical direction
    CHECK(board.read(2,2,vertical,6)=="tehila");//you can read what you posted
    CHECK_NOTHROW(board.post(2,2,vertical,"abadi1"));//you can override a post
    CHECK(board.read(2,2,vertical,2)=="ab");
    CHECK_NOTHROW(board.post(2,2,vertical,"te"));//you can override a part of a post from the top
    CHECK(board.read(2,2,vertical,6)=="teadi1");
    CHECK_NOTHROW(board.post(6,2,vertical,"la"));//you can override a part of a post from the end
    CHECK(board.read(6,2,vertical,2)=="la");
    CHECK(board.read(2,2,vertical,6)=="teadla");
    CHECK_NOTHROW(board.post(4,2,vertical,"hi"));//you can override a part of a post in the middle
    CHECK(board.read(4,4,vertical,2)=="hi");
    CHECK(board.read(2,2,vertical,6)=="tehila");
    CHECK_NOTHROW(board.post(10,10,vertical,"_"));//you can post "_" char
    CHECK(board.read(10,10,vertical,1)=="_");


}