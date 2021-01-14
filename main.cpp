#include <iostream>
#include <cmath>
using namespace std;

bool isCircle(int, int, int, int, int );
int main() {
cout<<"Exercises 1"<<endl;
cout << boolalpha<<isCircle(2,0,1,3,3) << endl;
//isCircle(2,0,1,3,3) false
//isCircle(6,1,1,4,4) true
return 0;
}
bool isCircle(int radius, int centerx, int centery, int x, int y){
  float power = 2.0;
  float squarex = pow((centerx-x),power);
  float squarey = pow((centery-y),power);
  float distance = sqrt(squarex + squarey);
  if (distance<radius) {
    return true;
  }
  else{
      return false;
  }
}