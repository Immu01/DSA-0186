#include<iostream>
using namespace std;
class Complex 
{
private:
    float real,imaginary;
public:
    Complex():real(0),imaginary(0){}
    void input() 
    {
        cout<<"Enter the value of Complex Numbers (a, b) = ";
        cin>>real>>imaginary;
    }
    Complex operator+(const Complex& other) const 
    {
        Complex result;
        result.real=real+other.real;
        result.imaginary=imaginary+other.imaginary;
        return result;
    }
    void display() const 
    {
        cout<<"Result = "<<real<<" + "<<imaginary<<"i\n";
    }
};
int main() 
{
    Complex complex1,complex2,result;
    complex1.input();
    complex2.input();
    result=complex1+complex2;
    result.display();
}