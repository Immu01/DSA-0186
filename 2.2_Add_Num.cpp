#include<iostream>
using namespace std;
int sumoftwonumbers(int a,int b)
{
    return a+b;
}
int sumofthreenumbers(int a,int b,int c)
{
    return a+b+c;
}
int main ()
{
    int a,b,c,sum,sum2;
    cout<<"\nEnter three numbers = \n";
    cin>>a>>b>>c;
    sum=sumoftwonumbers(a, b);
    sum2=sumofthreenumbers(a, b, c);
    cout<<"\nThe sum of two numbers "<<a<<" and "<<b<<" = "<<sum<<endl;
    cout<<"\nThe sum of three numbers "<<a<<" , "<<b<<" and "<<c<<" = "<<sum2<<endl;
}
