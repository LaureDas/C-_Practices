#ifndef Stack_hpp
#define Stack_hpp
#include <iostream>
#include <cmath>
#include<stdio.h>
#include"StackI.hpp"

using namespace std;

template <typename T> class Stack:public StackI<T>{
    protected:
        int size;
        int numbOfElem;
        int topIndex;
        T stack[];

    public:
        Stack(){
            size=20;
            stack[20];
            topIndex=0;
            numbOfElem=0;
        }
        Stack(int s){size=s;
            stack[s];
            topIndex=0;
            numbOfElem=0;
        }
        void push(T t){
            if(numbOfElem>size || numbOfElem<0){
                cout<<"FullStackException";
            }
            else{
                stack[topIndex++]=t;
                numbOfElem++;
            }

        }
        void pop(){
            if(isEmpty()){
                cout<<"EmptyStackException";
            }
            else{
                --topIndex;
                --numbOfElem;
            }
        }

        T top(){
            if(isEmpty()){
                cout<<"EmptyStackException";
                return stack[0];
            }
            else{
                return stack[topIndex];
            }
        }
        void print(){
            cout << "−−−−−−−−−−−" << endl;
            if (numbOfElem==0){
                cout << "EMPTY STACK" << endl;
            }
            else{
                int count=topIndex-1;
                for (int i=count;i>=0; i--){
                    if(i==count){
                        cout << "top−> \t";
                    }
                    else{
                        cout << "\t\t" ;
                        cout << stack[i] << endl;
                    }
           
                }  
            }     
            cout << "−−−−−−−−−−−" << endl << endl;
        }
        bool isEmpty(){
            if(numbOfElem==0){
                return true;
            }
            return false;
        }
};







#endif