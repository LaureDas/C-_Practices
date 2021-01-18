#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isCircle(int, int, int, int, int );
double position(double init_position, double speed, double acceleration, double t);

int main() {
cout<<"Exercise 1"<<endl;
cout << boolalpha<<isCircle(2,0,1,3,3) << endl;
//isCircle(2,0,1,3,3) false
//isCircle(6,1,1,4,4) true

cout<<"Exercise 2"<<endl;
double init_position, speed, acceleration, t, update_time;
int x_times, i;
cout << "enter the initial position:"<<endl;
cin >> init_position;
cout<<"enter the speed: " <<endl;
cin>>speed;
cout<<"enter the acceleration:"<<endl;
cin>>acceleration;
cout<<"how many times you want to display the position of the moving body?:"<<endl;
cin>> x_times;
cout<< "how often (in seconds) you want to update the position of the moving object?"<<endl;
cin>>update_time;
cout<<update_time<<endl;

for(i=0, t=0.0; i<=x_times; i++, t+=update_time){
  cout<<"at time :";
  cout << setw(10) << setprecision(4) << t << " the position is ";
  cout << setw(10) << setprecision(4) << position(init_position, speed, acceleration, t) << endl;
}
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

double position(double init_position, double speed, double acceleration, double t){
  return init_position + speed * t + 1.0/2*acceleration*t*t;
}
