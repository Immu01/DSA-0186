#include<iostream>
using namespace std;
void swapByValue(int a,int b) 
{
    int temp=a;
    a=b;
    b=temp;
}
void swapByReference(int &a,int &b) 
{
    int temp=a;
    a=b;
    b=temp;
}
int main() 
{
    int num1=5,num2=10;
    cout<<"\nBefore swapping = num1 = "<<num1<<", num2 = "<<num2<<"\n";
    swapByValue(num1,num2);
    cout<<"\nAfter swapping by value = num1 = "<<num1 <<", num2 = "<<num2<<"\n";
    swapByReference(num1,num2);
    cout<<"\nAfter swapping by reference = num1 = "<<num1<<", num2 = "<<num2<<"\n";
}