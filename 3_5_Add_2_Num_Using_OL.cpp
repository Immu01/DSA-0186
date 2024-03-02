#include<iostream>
using namespace std;
class Add 
{
public:
    static int add(int x,int y) 
    {
        return x+y;
    }
    static int add(int x,int y,int z) 
    {
        return x+y+z;
    }
};
int main() 
{
    cout<<Add::add(22,45)<< endl;
    cout<<Add::add(15,35,50)<<endl;
}