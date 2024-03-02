#include<iostream>
using namespace std;
int main ()
{
    int choice;
    double num1,num2;
    cout<<"\nEnter two numbers : \n";
    cin>>num1>>num2;
    cout<<"\nChoose an arthematic operation to perform : \n";
    cout<<"\n1 -> Addition \n2 -> Subtraction \n3 -> Multiplication \n4 -> Division \n5 -> Modulus \n";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nThe Addition of "<<num1<<" and "<<num2<<" = "<<num1+num2<<endl;
    } else 
    if(choice==2)
    {
        cout<<"\nThe Subtraction of "<<num1<<" and "<<num2<<" = "<<num1-num2<<endl;
    } else 
    if(choice==3)
    {
        cout<<"\nThe Multiplication of "<<num1<<" and "<<num2<<" = "<<num1*num2<<endl;
    } else 
    if(choice==4)
    {
        cout<<"\nThe Division of "<<num1<<" and "<<num2<<" = "<<num1/num2<<endl;
    } else 
    if(choice==5)
    {
        cout<<"\nThe Modulus of "<<num1<<" and "<<num2<<" = "<<fmod(num1,num2)<<endl;
    } else 
    {
        return 0;
    }
}