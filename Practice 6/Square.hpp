#ifndef Square_hpp
#define Square_hpp
#include <iostream>
#include <string.h>
#include<stdio.h>
#include"Shape.hpp"
#include"Rectangle.hpp"

class Square:public Rectangle{

    public:
        Square(){};
        Square(double s): Rectangle(s,s){};
        Square(double s, string c, bool f): Rectangle(s,s,c,f){};
        
        double getSide();
        void setSide(double s);
        void print();

        


};







#endif