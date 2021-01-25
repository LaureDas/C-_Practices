#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void triangle(int number_lines);

int main(){
  int number_lines;
  cout<<"Input number of lines for Ffloyd's triangle:"<<endl;
  cin>>number_lines;
  triangle(number_lines);

}

void triangle(int number_lines){
  int count=1;
  for(int i=1; i<=number_lines; i++){
    for(int j=1; j<=i; j++){
      cout<< count;
      count++;
    }
    cout<<endl;
  }
}