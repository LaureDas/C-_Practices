#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

class PointVector{
    private:
        double * a;
        int size;

    public:
        PointVector(int n){
            a= new double [n];
            size=n;
        }

        PointVector(double aa[], int n){
            a= new double [n];
            size=n;
            for(int i=0; i<n; i++){
                a[i]=aa[i];
            }

        }
        friend std::ostream& operator<<(std::ostream&out, const PointVector &point);

        

        void max_x(){
            int max=0;
            int y;
            int counter=0;
            for (int i=0; i<=size; i=i+2){
                if(a[i]>=max){
                    max=a[i];
                    y=a[i+1];
                }
            }
            cout<<"Point with max coordinate is: ("<<max<<","<<y<<")"<<endl;
        }

        void distance(){
            double distance;

            for(int i=0; i<=size-4; i=i+2){
                for(int j=i+2; j<=size-2; j+=2){
                    cout << "distance (" << a[i] << "," << a[i+1] << ")";
                    cout << " - (" << a[j] << "," << a[j+1] << "): ";
                    cout  << sqrt(pow(a[i]-a[j], 2)+pow(a[i+1]-a[j+1], 2)) << endl;

                }
            }
        
        }

        double subVector_increasing(){
            double result=0;



            return result;
        }




};

std::ostream& operator<<(std::ostream&out, const PointVector &point){
    out<<"vector= [";
                for(int i=0; i<point.size-1; i++){
                    out<<"("<<point.a[i]<<","<<point.a[i+1]<<"), ";
                    i++;
                }
    out<<"]"<<endl;
    return out;
};


int main(){
    double vector[6]={1.5,1,4.5,1,4.5,5};
    PointVector a(vector, 6);
    cout<<a<<endl;
    a.max_x();
    a.distance();

    return 0;
}