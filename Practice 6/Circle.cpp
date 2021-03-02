#include <iostream>
#include <string.h>
#include<stdio.h>
#include<math.h>
#include"Circle.hpp"

using namespace std;

double Circle::getArea(){
    return pow(radius,2)*M_PI*2;
}

double Circle::getPerimeter(){
    return radius*2*M_PI;
}

void Circle:: print(){
    cout<<"Radius of circle: "<< radius <<endl;
    cout<<"Area of circle: "<< getArea() <<endl;
    cout<<"Perimeter of circle: "<< getPerimeter() <<endl;
}