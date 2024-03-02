#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0,i=1;
    cout<<"\nEnter a number = ";
    cin>>num;
    while(i<num)
    {
        if(num%i==0)
        {
            sum += i;
        }
        i++;
    }
    if(sum==num)
    {
        cout<<"\nThe number "<<num<<" is a perfect number"<<endl;
    } else 
    {
        cout<<"\nThe number "<<num<<" is not a perfect number"<<endl;
    }
}