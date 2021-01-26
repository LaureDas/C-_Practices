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

/*double * read_x_values(int &k){
  cout<<"How many values do you want to test for?";
  cin>> k;
  cout << "What values of x would you like to evaluate your polynomial on?" << endl;  
  double * d = new double[k+1];
  for(int i=0;i<k;i++){
    cout << "value of x " << i << ": ";
    cin >> d[i];
  }
  return d;
}*/

double poly_x_value(double *c, double &x, int &k){
  double result=0.0;
  cout<<"What value of x to you want to test for?: "<< endl;
  cin>>x;
  for (int i=0; i<=k; i++){
      result = result + c[i] * pow(x,i);
    }
  return result;
}

double * sum_poly(double * poly_1, int g1, double * poly_2, int g2, int & gr){
if(g1==g2){ 
        gr = g1; 
        double* c = new double [g1+1]; 
        for(int i = 0; i<=gr; i++){
            c[i] = poly_1[i] + poly_2[i]; 
        }
        return c; 
    }
    else{
      gr = max(g1,g2);
      double* c = new double [gr+1];
      for(int i = 0; i<=min(g1,g2); i++){
        c[i] = poly_1[i] + poly_2[i];
      }
      if(g1==max(g1,g2)){
        for(int j = min(g1,g2)+1; j<=g2; j++){
          c[j] = poly_2[j];
        }
      }
    return c; 
    }
    
  }

double * poly_multiplication(double * poly_1, int &g1, double * poly_2, int &g2, int & gr){ 
    gr = g1 + g2; 
    double *poly = new double[gr+1]; 
    for(int k = 0; k<=gr; k++){
        poly[k] = 0; 
    }
    for(int i=0; i<=g1; i++){ 
        for (int j=0; j<=g2; j++){ 
            poly[i+j] =poly[i+j]+ (poly_1[i] * poly_2[j]);
        }
    }
    return poly; 
}
int main(){
  double *poly_1, *poly_2, *poly_3, *poly_4;
  int g1, g2, gr, g3, g4;
  double point_x, result_x;
  
  poly_1=read_poly(g1);
  print_poly(poly_1,g1);
  //calculate position in the polynomial
  result_x=poly_x_value(poly_1, point_x, g1);
  cout<<"The polynomial takes the position "<< result_x<< endl;
  
  //sum polynomials
  cout<<"Enter a second polynomial please"<<endl;
  poly_2 = read_poly(g2);
  cout<< "We sum the following two polynomials"<<endl;
  //print first poly
  cout<<"first polynomial"<< endl;
  print_poly(poly_2, g2);
  //print second poly
  cout<<"second polynomial"<< endl;
  print_poly(poly_1,g1);
  //sum polynomials
  poly_3= sum_poly(poly_1, g1, poly_2, g2, gr);
  //print polynomial of sum 
  cout<<"The sum of both polynomials results in: "<< endl;
  print_poly(poly_3,g3);
  cout<<endl;
  poly_4=poly_multiplication(poly_1, g1, poly_2, g2, gr);
  cout<<" The multiplication of the polynomials results in:"<<endl;
  print_poly(poly_4,g4);
  
  //free up memory allocation
  delete[] poly_1;
  delete[] poly_2;
  delete[] poly_3;
  delete[] poly_4;

  return 0;
}