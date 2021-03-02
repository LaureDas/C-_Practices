
#include <iostream>
#include <cmath>
#include<stdio.h>
#include "Point.hpp"
using namespace std;

int main(){
    cout<<"Hello"<<endl;
    Point p1= Point(1.0, 1.0);
    p1.display();

    Point p2=Point(2.0, 2.0);
    p2.display();

    cout.precision(3);
    cout<<p1.distance(p2)<<endl;
    return 0;
}