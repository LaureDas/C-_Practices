#include <iostream>
#include <math.h>
using namespace std;

double * read_poly(int &n){
  cout << "degree: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

double position(double *c, int n, double x){
  int result=0;
  for(int i=0; i<=n; i++){
    result =result+ c[i] * pow(x,i);
  }
  return result;
}

double * polinomial_sum(double * p1, int d1, double * p2, int d2, int & dr){
  if(d1==d2){
      double * pointer=new double[dr];
      for(int i=0; i<dr; i++){
          pointer[i]= p1[i]+p2[i];
      }
      return pointer;
  }
  else if(d1>d2){
      dr=d1;
      int difference=d1-d2;
      double * pointer=new double[dr];
      double * temp=new double[d2];
      for(int i=0; i<=d2; i++){
          temp[i]=p2[i];
      }
      for(int i=difference; i<=d1; i++){
          temp[i]=0;
      }
      for(int i=0; i<=dr; i++){
          pointer[i]= p1[i]+p2[i];
      }
      return pointer;
  }
  else{
      dr=d2;
      int difference=d2-d1;
      double * pointer=new double[dr];
      double * temp=new double[d2];
      for(int i=0; i<=d1; i++){
          temp[i]=p1[i];
      }
      for(int i=difference; i<=d2; i++){
          temp[i]=0;
      }
      for(int i=0; i<dr; i++){
          pointer[i]= p1[i]+p2[i];
      }
      return pointer;
  }
}

double * poli_mult(double * p1, int d1, double * p2, int d2, int & dr){
    //TBD
}

int main()
{
  double *p1, *p2;
  int g1, g2, dr;
  double x, result_position, *result_sum;

  p1=read_poly(g1);
  print_poly(p1,g1);
  //cout<<"Enter position of x"<<endl;;
  //cin>>x; 
  //result_position=position(p1, g1, x);
  //cout<<result_position<<endl;
  p2=read_poly(g2);
  print_poly(p2,g2);
  result_sum=polinomial_sum(p1, g1, p2, g2, dr);
  print_poly(result_sum, dr);

  poli_mult(p1, g1, p2, g2, dr);

  delete[] p1;
  delete[] p2;
  delete[] result_sum;
  return 0;
}