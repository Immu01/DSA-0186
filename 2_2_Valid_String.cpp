#include<iostream>
using namespace std;
int main ()
{
    string str,str1;
    cout<<"\nEnter a username = ";
    cin>>str;
    cout<<"\nREenter the username = ";
    cin>>str1;
    cout<<"\n";
    if(str != str1)
    {
        cout<<str<<"is not equal to "<<str1<<endl;
    } else 
    {
        cout<<str<<"is equal to "<<str1<<endl;
    }
}