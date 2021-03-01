#include <iostream>
using namespace std;

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

int main(){
    int numberx, numbery;
    cout<<"Input two integers"<<endl;
    cin>> numberx;
    cin>> numbery;
    multiple(numberx,numbery);
    return 0;
}