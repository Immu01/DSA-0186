#include<iostream>
using namespace std;
class SeriesSumCalculator 
{
public:
    SeriesSumCalculator() 
    {
        n=0;
        sum=0;
    }
    SeriesSumCalculator(int numberOfTerms) 
    {
        n=numberOfTerms;
        calculateSum();
    }
    void calculateSum() 
    {
        sum=0;
        for(int i=1;i<=n;i++) 
        {
            sum += i;
        }
    }
    void displaySum() 
    {
        cout<<"Sum of the series for "<<n<<" terms = "<<sum<<endl;
    }
private:
    int n;
    int sum;
};
int main() 
{
    int numberOfTerms;
    cout<<"Enter the number of terms in the series = ";
    cin>>numberOfTerms;
    SeriesSumCalculator calculator1;
    SeriesSumCalculator calculator2(numberOfTerms);
    calculator1.displaySum();
    calculator2.displaySum();
}