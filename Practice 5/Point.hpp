#ifndef Point_hpp
#define Point_hpp
#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

class Point{
    private:
       double x, y;
    public:
        //Default constructor
        Point(){
            x=y=0;
        }
        Point(double x1, double y1){
            x=x1;
            y=y1;
        }

        void display(){
            cout<<"x: "<<x<<endl;
            cout<<"y: "<<y<<endl;
        }

        double distance(Point);
};
#endif