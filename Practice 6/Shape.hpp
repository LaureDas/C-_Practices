#ifndef Shape_hpp
#define Shape_hpp
#include <iostream>
#include <string.h>
#include<stdio.h>

using namespace std;

class Shape{
    protected:
        std::string color;
        bool filled;
    
    public:
        Shape():color("green"),filled(true){}
        Shape(string colorx, bool filledx): color(colorx), filled(filledx){}

        string getColor(){
            return color;
        };
        void setColor(string c){
            color=c; 
        };
        bool getFilled(){
            return filled;
        };
        void setFilled(bool f){
            filled=f;
        };
        void print();
        double getArea();
        double getPerimeter();

};



#endif /*Shape_hpp*/