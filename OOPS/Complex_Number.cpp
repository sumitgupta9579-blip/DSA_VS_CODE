#include<iostream>
using namespace std;
class Complex{
public:
    float real;
    float img;
    Complex(float real, float img){
        this->real = real;
        this->img = img;
    }
    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    // void print(Complex c){
    //     cout<<c.real<<" + "<<c.img<<"i"<<endl;
    // }
    void sum(Complex c1, Complex c2){
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void subtract(Complex c1, Complex c2){
        real = c1.real - c2.real;
        img = c1.img - c2.img;
    }
    void multiply(Complex c1, Complex c2){
        real = c1.real * c2.real - c1.img * c2.img;
        img = c1.real * c2.img + c1.img * c2.real;
    }
    void divide(Complex c1, Complex c2){
        real = (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
        img = (c1.img * c2.real - c1.real * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    }
};
int main(){
    float a,b;
    cout<<"Enter the real and imaginary part of complex number 1: ";
    cin>>a>>b;
    float c,d;
    cout<<"Enter the real and imaginary part of complex number 2: ";
    cin>>c>>d;
    // Complex sum(a+c, b+d);
    // Complex product(a*c-b*d, a*d+b*c);
    // cout<<"The sum of complex numbers is: ";
    // sum.print();
    // cout<<"The product of complex numbers is: ";
    // product.print();
    Complex c1(a,b);
    Complex c2(c,d);
    Complex c3(0,0);
    c3.sum(c1,c2);
    cout<<"The sum of complex numbers is: ";
    c3.print();
    c3.subtract(c1,c2);
    cout<<"The difference of complex numbers is: ";
    c3.print();
    c3.multiply(c1,c2);
    cout<<"The product of complex numbers is: ";
    c3.print();
    c3.divide(c1,c2);
    cout<<"The division of complex numbers is: ";
    c3.print(); 
}