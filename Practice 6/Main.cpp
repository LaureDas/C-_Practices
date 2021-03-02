#include <iostream>
#include <cmath>
#include <string.h>
#include<stdio.h>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"


using namespace std;

int main(int argc, const char*argv[]){
    Shape* array[4];
    Circle circle_one(2, "blue", true);
    circle_one.print();
    Rectangle rectangle(2,3,"yellow", true);
    rectangle.print();
    cout<<rectangle.getColor()<<endl;

    return 0;
}