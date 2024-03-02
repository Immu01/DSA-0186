#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;
    if(num<=0)
    {
        cout<<"Enter a greater number";
        return 0;
    } else 
    {
        cout<<"The cube root of the number "<<num<<" = "<<cbrt(num)<<endl;
    }
}