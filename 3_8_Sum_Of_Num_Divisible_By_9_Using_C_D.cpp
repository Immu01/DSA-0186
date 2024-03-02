#include<iostream>
using namespace std;
class DivisibleByNineFinder 
{
public:
    DivisibleByNineFinder():sum(0){findNumbersAndSum();}
    ~DivisibleByNineFinder() {}
    void findNumbersAndSum() 
    {
        cout<<"Numbers divisible by 9 between 100 and 200 = \n";
        for(int i=100;i<=200;i++) 
        {
            if(i%9==0) 
            {
                cout<<i<<" ";
                sum+=i;
            }
        }
        cout<<"\nSum of numbers divisible by 9 = "<<sum<<endl;
    }
private:
    int sum;
};
int main() 
{
    DivisibleByNineFinder finder;
}