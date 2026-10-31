#include<iostream>
using namespace std;

class complex {
    private:
    float real;
    float imag;

    public:
    //Default constructor
    complex() {
        real=0;
        imag=0;
    }

    //Parametrized constructor
    complex(float r,float i) {
        real=r;
        imag=i;
    }

    //Destructor
    ~complex() {
    }

    //Display function
    void display() {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    //Overload+operator
    complex operator+(complex c) {
        return complex(real+c.real,imag+c.imag);
    }
    
    //Overload*operator
    complex operator*(complex c) {
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return complex(r,i);
    }
    
};

int main() {
    complex c1(4,5),c2(2,3);

    cout<<"\nFirst Complex Number:";
    c1.display();
    cout<<"Second Complex Number:";
    c2.display();

    complex sum=c1+c2;
    cout<<"\nSum:";
    sum.display();
    complex Difference=c1-c2;
    cout<<"\nDifference:";
    Difference.display();


    complex prod=c1*c2;
    cout<<"Product:";
    prod.display();

    return 0;
}   
First Complex Number:4+5i
Second Complex Number:2+3i

Sum:6+8i
difference:2+2i
Product:-7+22i 
