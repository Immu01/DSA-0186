#include<iostream>
using namespace std;
int main ()
{
    double num;
    cout<<"\nEnter a number \n";
    cin>>num;
    if(fmod(num,2)==0)
    {
        cout<<"The number "<<num<<" is an even number"<<endl;
    } else 
    {
        cout<<"The number "<<num<<" is an odd number"<<endl;
    }
}