#include<iostream>
#include<cmath>
using namespace std;
class BinaryToOctalConverter 
{
public:
    BinaryToOctalConverter(long long binaryNumber):binary(binaryNumber),octal(convertBinaryToOctal()){}
    long long convertBinaryToOctal() 
    {
        int octalNumber=0,decimalNumber=0,i=0;
        while (binary!=0) 
        {
            decimalNumber+=(binary%10)*pow(2,i);
            i++;
            binary/=10;
        }
        i=1;
        while (decimalNumber!=0) 
        {
            octalNumber+=(decimalNumber%8)*i;
            decimalNumber/=8;
            i*= 0;
        }
        return octalNumber;
    }
    void displayResult() const 
    {
        cout<<"Binary = "<<binary<<"\nOctal = "<<octal<<endl;
    }
private:
    long long binary;
    long long octal;
};
int main() 
{
    long long binaryNumber;
    cout<<"Enter a binary numbern = ";
    cin>>binaryNumber;
    BinaryToOctalConverter converter(binaryNumber);
    converter.displayResult();
}