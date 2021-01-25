#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int fib(int n){
int fibminus2=0;
int fibminus1=1;
int fib=0;
int i;

if (n==0 || n==1){
  return n;
}
    
for(i=2;i<=n;i++){

  fib=fibminus1+fibminus2;
  fibminus2=fibminus1;
  fibminus1=fib;
}
return fib;
}
int main(){
  int result;
  int number;
  cout<<"Enter an integer: ";
  cin>> number;
  result=fib(number);
  cout<<result<<endl;

return 0;
}


