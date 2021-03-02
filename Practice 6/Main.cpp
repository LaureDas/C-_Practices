#include <iostream>
#include <cmath>
#include <string.h>
#include<stdio.h>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"


using namespace std;

int main(int argc, const char*argv[]){
    Shape* array[4];
    Shape s1("black", true);
    Circle circle_one(2, "blue", true);
    circle_one.print();
    Rectangle rectangle(2,3,"yellow", true);
    rectangle.print();
    cout<<rectangle.getColor()<<endl;
    Square square(2,"purple", false);

    array[0]=&s1;
    array[1]=&circle_one;
    array[2]=&rectangle;
    array[3]=&square;

    Shape *ptr;

    for(int i=0; i<=4; i++){
        ptr=array[i];
        array[i]->print();
    }

    return 0;
}