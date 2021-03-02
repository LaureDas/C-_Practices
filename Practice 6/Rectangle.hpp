#ifndef Rectangle_hpp
#define Rectangle_hpp
#include <iostream>
#include <string.h>
#include<stdio.h>
#include"Shape.hpp"

using namespace std;

class Rectangle: public Shape{
    protected:
        double length;
        double width;
    public:
        Rectangle():length(1.0), width(1.0){}
        Rectangle(double l, double w): length(l), width(w){}
        Rectangle(double l, double w, string c, bool f): length(l), width(w), Shape(c,f) {}

        double getWidth(){
            return width;
        }
        void setWidth(double w){
            width=w;
        }
        double getLength(){
            return length;
        }
        void setLength(double l){
            length=l;
        }
        double getArea();
        double getPerimeter();
        void print();

};



#endif