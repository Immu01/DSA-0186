#include<iostream>
using namespace std;
class CubeCalculator 
{
public:
    CubeCalculator() 
    {
        limit=0;
    }
    CubeCalculator(int n) 
    {
        limit=n;
    }
    void displayCubes() 
    {
        cout<<"Cubes of numbers up to "<<limit<<" =\n";
        for (int i=1;i<=limit;i++) 
        {
            int cube =i*i*i;
            cout<<"Cube of "<<i<<" = "<<cube<<endl;
        }
    }
private:
    int limit;
};
int main() 
{
    int n;
    cout<<"Enter the limit for displaying cubes = ";
    cin>>n;
    CubeCalculator cubeCalc1;
    CubeCalculator cubeCalc2(n);
    cubeCalc1.displayCubes();
    cubeCalc2.displayCubes();
}