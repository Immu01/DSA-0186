#include <iostream>
using namespace std;
class DecimalToBinary 
{
private:
    long long binary;
public:
    DecimalToBinary(int decimal):binary(0) 
    {
        convertToBinary(decimal);
        displayResult();
    }
    void convertToBinary(int decimal) 
    {
        int base=1;
        while(decimal>0) 
        {
            int remainder=decimal%2;
            binary+=remainder*base;
            decimal/=2;
            base*=10;
        }
    }
    void displayResult()const 
    {
        cout<<"Binary representation = "<<binary<<endl;
    }
};
int main() 
{
    int decimalNumber;
    cout<<"Enter a decimal number = ";
    cin>>decimalNumber;
    DecimalToBinary converter(decimalNumber);
}