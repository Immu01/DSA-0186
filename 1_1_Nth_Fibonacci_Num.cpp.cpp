#include<iostream>
using namespace std;
int main ()
{
    int num,i;
    cout<<"\nEnter the value of num \n = ";
    cin>>num;
    int fib1 = 0,fib2 = 1,fibn;
    if (num==0)
    {
        fibn = fib1;
    }
    else if (num == 1)
    {
        fibn = fib2;
    } else 
    for (i=1;i<num;i++)
    {
        fibn = fib1+fib2;
        fib1 = fib2;
        fib2 = fibn;
    }
    cout<<"The "<<num<<"th Fibonacci number = "<<fibn<<endl;
}