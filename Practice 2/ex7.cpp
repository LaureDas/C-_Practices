#include <iostream>

using namespace std;

double pow(int base, int expo);
double pow2(int base, int expo);

int counter=0;

int main(){
  int answer, base, expo; 
  cout << "Input type of power (1) for pow / (2) for pow2:"<<endl;
  cin >> answer;
  cout<<"Input base:"<<endl;
  cin>> base;
  cout << "Input exponent:"<<endl;
  cin>> expo;
  cout<<base<<"^"<< expo<< "="<<((answer==2)?pow2(base,expo):pow(base,expo))<<endl;
  cout<<"Recursive calls:"<<counter<< "("<< (answer==2? "pow2": "pow")<<")"<<endl;
  return 0;
}

double pow(int base, int expo){
  counter++;
  if (expo==0){
    return 1;
  }
  return base*pow(base, expo-1);
}
double pow2(int base, int expo){
  counter++;
  if (expo==0){
    return 1;
  }
  int coefficient=expo%2 ==0? 1:base;
  if (expo%2==0){
    return pow2(base,expo/2)*pow2(base, expo/2);
  }
  return base*pow2(base, expo/2)*pow2(base,expo/2);
}