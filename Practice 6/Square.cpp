#include <iostream>
#include <string.h>
#include<stdio.h>
#include"Square.hpp"

double Square::getSide(){
    return Rectangle::getLength();
}

void Square::print(){
    cout<<"Square"<<endl;
    Shape::print();
    cout<<endl<<"side: "<<Rectangle::getLength()<<endl;
    cout<<"area: "<<Rectangle::getArea()<<endl;
    cout<<"perimeter: "<<Rectangle::getPerimeter()<<endl;
}

void Square::setSide(double s){
    Rectangle::setWidth(s);
    Rectangle::setLength(s);
}