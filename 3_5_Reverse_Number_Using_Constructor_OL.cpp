#include<iostream>
using namespace std;
class ReverseNumber 
{
public:
    ReverseNumber() 
    {
        originalNumber=0;
        reversedNumber=0;
    }
    ReverseNumber(int number) 
    {
        originalNumber=number;
        reverseNumber();
    }
    void reverseNumber() 
    {
        int remainder,reversed=0;
        int temp=originalNumber;
        while(temp!=0) 
        {
            remainder=temp%10;
            reversed=reversed*10+remainder;
            temp/=10;
        }
        reversedNumber=reversed;
    }
    void displayReversedNumber() 
    {
        cout<<"Original Number = "<<originalNumber<<endl;
        cout<<"Reversed Number = "<<reversedNumber<<endl;
    }
private:
    int originalNumber;
    int reversedNumber;
};
int main() 
{
    int number;
    cout<<"Enter a number to reverse = ";
    cin>>number;
    ReverseNumber reverse1;
    ReverseNumber reverse2(number);
    cout<<"\nReversed Number using default constructor =\n";
    reverse1.displayReversedNumber();
    cout<<"\nReversed Number using parameterized constructor =\n";
    reverse2.displayReversedNumber();
}