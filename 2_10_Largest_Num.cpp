#include<iostream>
using namespace std;
class Largest 
{
private:
    int a,b,m;
public:
    void setData(int x,int y,int z) 
    {
        a=x;b=y;m=z;
    }
    friend void find_Max(Largest obj);
};
void find_Max(Largest obj) 
{
    if(obj.a>=obj.b&&obj.a>=obj.m)
        cout<<"The largest number is = "<<obj.a<<endl;
    else if(obj.b>=obj.a&&obj.b>=obj.m)
        cout<<"The largest number is = "<<obj.b<<endl;
    else
        cout<<"The largest number is = "<<obj.m<<endl;
}
int main() 
{
    Largest myObj;
    int x,y,z;
    cout<<"Enter three numbers = ";
    cin>>x>>y>>z;
    myObj.setData(x,y,z);
    find_Max(myObj);
}