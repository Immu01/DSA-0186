#include<iostream>
using namespace std;
bool perfect(int num)
{
    int sum=0,i;
    for(i=0;i<num;i++)
    {
        if(num%i==0)
        {
            sum += i;
        }
    }
    return sum==num;
}
int main ()
{
    int num;
    cout<<"\nEnter a number = ";
    cin>>num;
    if(perfect(num))
    {
        cout<<"The number "<<num<<" is a perfect number"<<endl;
    } else 
    {
        cout<<"The number "<<num<<" is not a perfect number"<<endl;
    }
}