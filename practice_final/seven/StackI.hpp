#ifndef StackI_hpp
#define StackI_hpp
#include <iostream>
#include <cmath>
#include<stdio.h>

using namespace std;

template<typename T>
class StackI{
    public:
        virtual void push(T t)=0;
        virtual void pop()=0;
        virtual T top()=0;
        virtual bool isEmpty()=0;
        virtual void print()=0;
};

#endif /*Stack_hpp*/