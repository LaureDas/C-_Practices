#include <iostream>
#include <cmath>
#include<stdio.h>
#include"Point.hpp"
using namespace std;


        double Point::distance(Point p){
            double d1=0;
            d1= pow(x-p.x,2);
            double d2=0;
            d2= pow(y-p.y,2);
            return sqrt(d1+d2);
        }

