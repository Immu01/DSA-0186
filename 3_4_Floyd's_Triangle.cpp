#include<iostream>
using namespace std;
class FloydTriangle 
{
private:
    int rows;
public:
    FloydTriangle(int r):rows(r) 
    {
        for(int i=1,num=1;i<=rows;i++) {
            for(int j=1;j<=i;j++,num++)
                cout<<num<<" ";
            cout<<"\n";
        }
    }
    FloydTriangle() {}
};
int main() 
{
    int numRows;
    cout<<"Enter the number of rows for Floyd's Triangle = ";
    cin>>numRows;
    FloydTriangle triangle(numRows);
}