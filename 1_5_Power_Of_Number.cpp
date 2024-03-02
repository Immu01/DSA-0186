#include<iostream>
using namespace std;
double power(double base,double exponent)
{
    double result = 1;
    int i;
    for(i=0;i<abs(exponent);i++)
    {
        result *= base;
    }
    return result;
}
int main ()
{
    double base,exponent;
    double result;
    cout<<"Enter the base value \n";
    cin>>base;
    cout<<"Enter the exponent value \n";
    cin>>exponent;
    result = power(base,exponent);
    cout<<"The power of base"<<base<<" and exponent "<<exponent<<"=\n"<<result<<endl;
}