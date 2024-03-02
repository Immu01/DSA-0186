#include<iostream>
using namespace std;
int main ()
{
    double num;
    cout<<"\nEnter a number \n";
    cin>>num;
    if(fmod(num,2)==0 || fmod(num,3)==0 || fmod(num,5)==0 || fmod(num,7)==0)
    {
        cout<<"The number "<<num<<" is not a prime number"<<endl;
    } else
    {
        cout<<"The number "<<num<<" is a prime number"<<endl;
    }
}