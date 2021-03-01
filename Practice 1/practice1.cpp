#include <iostream>
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

int main(){
    int numberx, numbery, prints;
    //cout<<"Input two integers"<<endl;
    //cin>> numberx;
    //cin>> numbery;
    //multiple(numberx,numbery);
    cin>>prints;
    print_start(prints);
    return 0;
}