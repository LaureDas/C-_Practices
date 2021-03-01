#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

const int ms=50; // max dimensions of arrays and matrices

// function prototypes:
void read_int_vector(int a[], int n);
void simpler_random_int_vector(int v[], int s, int M);
void print_int_vector(int a[], int n);
void random_int_vector(int a[], int n, int m, int M);
void print_double_vector(double v[], int n);
void random_reals(double v[], int n, int m, int M);
void sum_real_vector(const double a1 [], const double a2[], double r[], int n);
void difference_real_vector(const double a1 [], const double a2[], double r[], int n);
void product_real_scalar(const double a1[], double r[], int n, int scalar);
void product_real_scalars(const double a1[], const double a2[], int n);
int search_min(double v[], int l, int h);

int main()
{
  //Exercise 1 test
  int a [5]={0};
  //read_int_vector(a, 5);
  //print_int_vector(a, 5);

  //Exercise 2 test
  int n=5;
  int m=1;
  int M=10;
  int b[n];
  //random_int_vector(b, n, m,  M);

  //Exercise 3 test
  double v []={2.2, 3.44, 4444.555, 222};
  int z= 4;
  //print_double_vector(v,z);

  //exercise 4 test
  int j=10;
  double w[j];
  int T=10;
  int t=1;
  //random_reals(w, j,  t,  T);

  //EXERCISE 6 TEST
  double f[]={3,2,5,2,6,8,4,2,5,7,1,2};
  int l=4;
  int h=9;
  int result_search_min;
  result_search_min=search_min(f, l, h);
  cout<<result_search_min<<endl;
  /*srand(time(0)); // initialisation of random number generation, see lecture notes

  int v1[ms], s;

  do{
    cout << "Vector dimension? ";
    cin >> s;
    if(s>ms)
        cout << "The maximal dimension is:  " << ms << "\n";
  }while(s>ms);

  read_int_vector(v1,s);

  cout << "The elements of the inputed array are: \n";
  for(int i=0;i<s;i++)
    cout << v1[i] << " ";
  cout << "\n";

  simpler_random_int_vector(v1,s,10);

  cout << "The elements of the randomly generated array are: \n";
  for(int i=0;i<s;i++)
    cout << v1[i] << " ";
  cout << "\n";
*/
  return 0;
}

// Function definitions

// Function that reads in n integers and store them in the array a
void read_int_vector(int a[], int n){
  for(int i=0;i<n;i++){
    cout << i+1 << ". numero: ";
    cin >> a[i];
  }
}

// Function that create an array with s integers randomly generated in the interval [0,M]
void simpler_random_int_vector(int v[], int s, int M){
  for(int i=0;i<s;i++)
    v[i]=rand()%(M+1);
}

//Exercise 1
void print_int_vector(int a[], int n){
  cout<<"{";
  for(int i=0; i<n-1; i++){
    cout<<a[i]<<",";
  }
  cout<<a[n-1]<<"}"<<endl;
}

//Exercise 2
void random_int_vector(int a[], int n, int m, int M){
  for (int i=0; i<n; i++){
    a[i]= rand() % (M-m +1) +m;
    //cout<< a[i] <<endl;
  }
  
}

//EXERCISE 3
void print_double_vector(double v[], int n){
  for(int i =0; i < n ; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

//EXERCISE 4
void random_reals(double v[], int n, int m, int M){
  double temp;
  for (int i=0; i<n; i++){
    v[i]= (double) rand()/RAND_MAX * (M-m) +m ;
    //v[i]= fmod((double) (rand()/RAND_MAX), (M-m +1) +m ); 
    cout.precision(2);
    cout<<v[i]<<" ";
  }
}

//EXERCISE 5
//sum
void sum_real_vector(const double a1 [], const double a2[], double r[], int n){
  for(int i=0; i<n; i++){
    r[i]=a1[i]+a2[i];
  }
}

//difference
void difference_real_vector(const double a1 [], const double a2[], double r[], int n){
  for(int i=0; i<n; i++){
    r[i]=a1[i]-a2[i];
  }
}
//product by scalar
void product_real_scalar(const double a1[], double r[], int n, int scalar){
  for(int i=0; i<n; i++){
    r[i]=a1[i]*scalar;
  }
}
//scalar product
void product_real_scalars(const double a1[], const double a2[], int n){
  double sp=0;
  for(int i=0; i<n; i++){
    sp+=a1[i]*a2[i];
  }
}

//EXERCISE 6
int search_min(double v[], int l, int h){
  int index=0;
  int min=v[l];
  for(int i=l; i<=h; i++){
    if(v[i]<=min){
      min=v[i];
      index=i;
    }
  }
  return index;
}