#include<iostream>
using namespace std;
inline bool palindrome(const string& str)
{
    for(size_t i=0;i<str.length()/2;i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    string str;
    cout<<"Enter a string = ";
    getline(cin,str);
    if(palindrome(str))
    {
        cout<<"The given string "<<str<<" is palindrome"<<endl;
    } else 
    {
        cout<<"The given string "<<str<<" is not a palindrome"<<endl;
    }
}