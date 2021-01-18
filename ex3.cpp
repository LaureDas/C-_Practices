#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void swap(int &x, int &y);

int main() {
cout<<"Exercise 3"<<endl;
int x=20;
int y=10;
swap(x,y);
return 0;
}

void swap(int &x, int &y){
  int temp=x;
  x=y;
  y=temp;
  cout<<x<<endl;
  cout<<y<<endl;
}

