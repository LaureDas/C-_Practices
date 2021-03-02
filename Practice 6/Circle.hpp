#ifndef Circle_hpp
#define Circle_hpp
#include"Shape.hpp"
#include <iostream>
#include <string.h>
#include<stdio.h>

using namespace std;
class Circle: public Shape{
    private:
        double radius;
    public:
        Circle():radius(1.0){}
        Circle(double r): radius(r){}
        Circle(double r, string c, bool f): radius(r), Shape(c,f){}

        double getRadius(){
            return radius;
        }
        void setRadius(double r){
            radius=r;
        }
        double getArea();
        double getPerimeter();
        void print();
};


#endif