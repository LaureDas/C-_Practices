
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int fib(int x, int count) {
  static int counter;
  int result;

  if(count)
    counter=0;
  else
    counter++;

   if((x==1)||(x==0)) {
       if(count){
        cout << "Number of recursive calls is " << counter << ".\n";
       }
       return x;
  }
      result=(fib(x-1,0)+fib(x-2,0));
      if(count){
        cout << "Number of calls is " << counter << ".\n";
      }
      return result;

   }

int main() {
   int x , res;

   cout << "Enter the number : ";
   cin >> x;
   res= fib(x, 1);
   cout << x<< endl<< "Fibonacci number is : " << res<< endl;
   return 0;
}