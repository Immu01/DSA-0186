#include<iostream>
using namespace std;
int main ()
{
    double celsius,fahrenheit;
    cout<<"Enter the celsius value = ";
    cin>>celsius;
    fahrenheit=(celsius*9.0/5.0)+32.0;
    cout<<"The celsius "<<celsius<<" in fahrenheit "<<fahrenheit<<endl;
}