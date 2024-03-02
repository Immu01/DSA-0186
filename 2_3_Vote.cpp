#include<iostream>
using namespace std;
void age()
{
    int age;
    cout<<"Enter the age = ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nYou are eligible to vote";
    } else 
    {
        cout<<"\nYou will be eligible to vote after "<<18-age<<" years"<<endl;
    }
}
int main ()
{
    age();
}