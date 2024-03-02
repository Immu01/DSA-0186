#include<iostream>
using namespace std;
class Series 
{
private:
    int n;
public:
    void input() 
    {
        cout<<"Enter a number = ";
        cin>>n;
    }
    void show() 
    {
        int a=0,b=1,c;
        cout<<"Fibonacci series up to "<<n<<" terms = ";
        for(int i=0;i<n;i++) 
        {
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"\n";
    }
};
int main() 
{
    Series seriesObj;
    seriesObj.input();
    seriesObj.show();
}