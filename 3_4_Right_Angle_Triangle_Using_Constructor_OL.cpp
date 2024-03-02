#include<iostream>
using namespace std;
class NumberTriangle 
{
public:
    NumberTriangle() 
    {
        rows=0;
    }
    NumberTriangle(int numberOfRows) 
    {
        rows=numberOfRows;
        generatePattern();
    }
    void generatePattern() 
    {
        for (int i=1;i<=rows;i++) 
        {
            for (int j=1;j<=i;j++) 
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
private:
    int rows;
};
int main() 
{
    int numberOfRows;
    cout<<"Enter the number of rows for the pattern = ";
    cin>>numberOfRows;
    NumberTriangle triangle1;
    NumberTriangle triangle2(numberOfRows);
    cout<<"Pattern using default constructor = \n";
    triangle1.generatePattern();
    cout<<"\nPattern using parameterized constructor = \n";
    triangle2.generatePattern();
}