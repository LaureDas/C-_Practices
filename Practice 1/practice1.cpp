#include <iostream>
#include <cmath>
using namespace std;

//exercise 3
void multiple(int x, int y){
    int test=0;
    for(int i=1; i<=y; i++){
        if(y%i==0 && i==x){
            test=1;
            cout<< "True";
        }
    }
    if (x==0){
        cout<<"True, zero is a multiple of all numbers";
        test=1;
    }
    if(test==0){
        cout<< "False";

    }
    
}

//exercise 4
void print_start(int n){
    int count=0;
    while(count<n){
        cout<<"*";
        count++;
    }
}

//exercise 6
void print_five(){
    int max=5;
    int counter=0;
    int i=0;
    while(counter<max){
        while(i<max){
            cout<<"*";
            i++;
        }
        cout<<endl;
        i=0;
        counter++;
    }
}

void print_triangle(){
    int max=5;
    int i=0;
    int counter=0;
    while(i<max){
        while(counter<i+1){
            cout<<"*";
            counter++;
        }
        cout<<endl;
        i++;
        counter=0;
    }
}

void print_reverse_triangle(){
    int max=5; 
    int i=0;
    int counter=5;
    while (i<max){
        while(counter>i){
            cout<<"*";
            counter--;
        }
        cout<<endl;
        i++;
        counter=5;
    }
}

void max_value(int n){
    double max= __DBL_MIN__;
    double min= __DBL_MAX__;
    double entry=0.0;
    for(int i=0; i<n; i++){
        cout<<"enter a number";
        cin>>entry;
        if(entry>max){
            max=entry;
        }
        if(entry<min){
            min=entry;
        }
    }
    cout<<"maximum"<<max;
    cout<<"minimum:"<<min;
}

//exercise8

void pi_approx(double n){
    double pi=0.0;
    for(int j=0; j<=n; j++){
        pi+= pow(-1, j) * 4/(2*j+1);
    }
    cout.precision(50);
    cout<<pi<<endl;
}

void pi_approx_bis(double error, double n){
    double pi=0.0;
    double pi_previous=0.0;
    double delta= pi-pi_previous;
    while(abs(delta)< error){
        for(int j=0; j<n; j++){
            pi_previous+= pow(-1, j-1) * 4/(2*j);
            pi+= pow(-1, j) * 4/(2*j+1);
            delta= pi-pi_previous;
            j++;
        }
    }
    cout.precision(50);
    cout<<pi<<endl;
}

int main(){
    int numberx, numbery, prints;
    //cout<<"Input two integers"<<endl;
    //cin>> numberx;
    //cin>> numbery;
    //multiple(numberx,numbery);
    //cin>>prints;
    //print_start(prints);
    //print_five();
    //print_triangle();
    //print_reverse_triangle();
    //max_value(10);
    pi_approx(50);
    pi_approx_bis(2, 50);
    return 0;
}