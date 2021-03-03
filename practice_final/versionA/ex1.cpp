#include<iostream>
#include<stdio.h>

using namespace std;


void draw(int n){
    int ind_above=0;
    int middle=n/2;
    cout<<middle<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==0 || i==n-1 || i==j || j==n-i-1 || j==0 ||j==n-1){
                cout<<"x";
              
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    cout<<endl;


}
int main(){
    int n;
    //cout<<"number of lines";
    //cin>>n;
    draw(15);
    return 0;
}