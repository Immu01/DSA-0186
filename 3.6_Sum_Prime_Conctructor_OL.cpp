#include <iostream>
#include <cmath>
using namespace std;
class PrimeChecker 
{
public:
    PrimeChecker(int number):num(number) 
    {
        isSumOfPrimes=checkSumOfPrimes();
    }
    ~PrimeChecker() {}
    bool checkSumOfPrimes() 
    {
        for(int i=2;i<=num/2;i++) 
        {
            if(isPrime(i)&&isPrime(num-i)) 
            {
                prime1=i;
                prime2=num-i;
                return true;
            }
        }
        return false;
    }
    bool isPrime(int n) 
    {
        if(n<=1) 
        {
            return false;
        }
        for(int i=2;i<=sqrt(n);i++) 
        {
            if(n%i==0) 
            {
                return false;
            }
        }
        return true;
    }
    void displayResult() 
    {
        cout<<num;
        if (isSumOfPrimes) 
        {
            cout<<" can be expressed as the sum of two prime numbers = "<<prime1<<" and "<<prime2<<endl;
        } else 
        {
            cout<<" cannot be expressed as the sum of two prime numbers\n";
        }
    }

private:
    int num;
    bool isSumOfPrimes;
    int prime1,prime2;
};
int main() 
{
    int number;
    cout<<"Enter a number to check if it can be expressed as the sum of two prime numbers = ";
    cin>>number;
    PrimeChecker checker(number);
    checker.displayResult();
}