#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0,i=1;
    cout<<"\nEnter a number = ";
    cin>>num;
    do
    {
        sum += i;
        i++;
    }
    while(i<=num);
    cout<<"\nThe sum of first "<<num<<" natural numbers = "<<sum<<endl;
}