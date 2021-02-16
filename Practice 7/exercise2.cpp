#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <typename T>
class StackI {
  public:
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
};

template<typename T>
class Stack: public StackI <T>{
  private:
    int number_elements;
    int size;
    T *t;

  public:
  //first constructor of size 20
    Stack(){
      number_elements=0;
      size=20;
      t = new T[20];
    }
  //second constructor of size n
    Stack(int n){
      number_elements=0;
      size=n;
      t = new T[n];
    }

    void push(T x){
      if(number_elements<size && number_elements>=0){
        t[size-number_elements]=x;
        number_elements+=1;
      }
      else{
        cout<<"Full Stack Exception"<<endl;
      }
    };

    void pop(){
      if(isEmpty()){
        cout<<"Empty Stack Exception"<<endl;
      }
      else{//come back to this!!!
        number_elements=number_elements-1;
      }
    };

    T top(){
      if(isEmpty()){
        cout<<"Empty Stack Exception"<<endl;
      }
      else{
        cout<<"The top of the stack is: "<< t[number_elements]<<endl;
        return t[number_elements];
      }
    };

    void print(){
      if(isEmpty()){
        cout<<"Empty Stack Exception"<<endl;
      }
      else{
        cout<<"[";
        for (int index=number_elements;index>0;index--){ 
          cout<<t[index]<<" ";
        }
        cout<<"]";
        cout<<endl;
      }
    };

    bool isEmpty(){
      if(number_elements==0){
        return 1;
      }
      else{return 0;}
    }
};


int main(){
  Stack <int> s = Stack<int>(5);
  s.push(200);
  s.push(12);
  s.push(24);
  s.push(50);
  s.pop();
  s.pop();
  s.push(555);
  s.top();
  s.print();
}