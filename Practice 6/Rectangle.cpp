#include <iostream>
#include <string.h>
#include<stdio.h>
#include"Rectangle.hpp"

using namespace std;

double Rectangle::getArea(){
    return width*length;
};

double Rectangle::getPerimeter(){
    return (width+length)*2;
}

void Rectangle::print(){
    cout<<"length and width of rectangle: "<< length <<" "<< width <<endl;
    cout<<"Area of rectangle: "<< getArea() <<endl;
    cout<<"Perimeter of rectangle: "<< getPerimeter() <<endl;
}