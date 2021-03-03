#include<iostream>
#include<stdio.h>

using namespace std;

class Complex{
    private:
        double r;
        double i;
    public:
        Complex():r(0.0), i(0.0){}
        Complex(double rr, double ii): r(rr), i(ii){}
        double getR() const {return r;}
        double getI() const {return i;}
        friend std::ostream& operator<<(std::ostream&, const Complex&);
};

Complex operator+(const Complex &c1, const Complex &c2){
    return Complex((c1.getR()+c2.getR()), (c1.getI()+c2.getI()));
}

Complex operator-(const Complex &c1, const Complex &c2){
    return Complex((c1.getR()-c2.getR()), (c1.getI()-c2.getI()));
}

Complex operator*(const Complex &c1, const Complex &c2){
    return Complex((c1.getR()*c2.getR()-(c1.getI()-c2.getI())), (c1.getR()*c2.getI()+c1.getI()*c2.getR()));
}

Complex operator/(const Complex &c1, const Complex &c2){
    return Complex((c1.getR()*c2.getR()+c1.getI()*c2.getI())*1/(pow(c1.getI(),2)-pow(c2.getI(),2)), (-c1.getR()*c2.getI()+c1.getI()*c2.getR())*1/(pow(c1.getI(),2)-pow(c2.getI(),2)));
}

std::ostream& operator<<(std::ostream&out, const Complex&c){
    out<<"("<<c.r<<","<<c.i<<")";
    return out;
}

int main(){
    Complex c1(-4,7);
    Complex c2(5,-10);
    Complex c3(2,12);
    Complex c4(3,15);
    Complex c5(1,-5);
    Complex c6(-9,2);
    Complex c7(0,7);
    Complex c8(-5,2);
    Complex c11(3,-1);
    Complex c12(2,7);
    
    cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout<<c1<< "+" << c2 << "=" << c1+c2 << endl;
    cout<<c3<< "-" << c4 << "=" << c3-c4 << endl;
    cout<<c5<< "*" << c6 << "=" << c5*c6 << endl;
    cout<<c7<< "*" << c8 << "=" << c7*c8 << endl;
    cout<<c11<< "/" << c12 << "=" << c11/c12 << endl;
   
    return 0;
}