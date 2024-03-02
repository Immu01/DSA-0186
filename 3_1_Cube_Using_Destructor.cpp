#include <iostream>
using namespace std;
class CubeCalculator 
{
public:
    CubeCalculator(int n) : num(n) {}
    CubeCalculator() 
    {
        for(int i=1;i<=num;i++) 
        {
            int cube=i*i*i;
            cout<<"Cube of "<<i<<" = "<<cube<<endl;
        }
    }
private:
    int num;
};
int main() 
{
    int num;
    cout<< "Enter a number = ";
    cin >> num;
    CubeCalculator calculator(num);
}