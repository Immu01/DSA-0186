#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0,i=1;
    cout<<"\nEnter the number = ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum += i;
    }
    cout<<"\nThe sum of first "<<num<<" natural numbers = "<<sum<<endl;
}