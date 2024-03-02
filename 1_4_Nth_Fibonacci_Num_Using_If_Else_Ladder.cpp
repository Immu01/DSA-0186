#include<iostream>
using namespace std;
int findNthFibonacci(int n) 
{
    if(n<=0)return -1;
    else if(n==1)return 0;
    else if(n==2)return 1;
    else 
    {
        int a=0,b=1,c=0;
        for(int i=3;i<=n;i++) 
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main() 
{
    int n;
    cout<<"Enter the value of N to find the Nth Fibonacci number = ";
    cin>>n;
    int result=findNthFibonacci(n);
    if(result!=-1)
        cout<<"The "<<n<<"th Fibonacci number is = "<<result<<endl;
    else
        cout<<"Invalid input:Please enter a positive integer\n";
}