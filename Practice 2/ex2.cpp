#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double position(double init_position, double speed, double acceleration, double t);

int main() {
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
    cout.precision(4);
    cout << setw(15) << t << " the position is ";
    cout << setw(15) << position(init_position, speed, acceleration, t) << endl;
  }
}

double position(double init_position, double speed, double acceleration, double t){
  return double(init_position + speed * t + 1.0/2*acceleration*t*t);
}

