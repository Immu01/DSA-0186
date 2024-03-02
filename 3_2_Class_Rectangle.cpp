#include<iostream>
using namespace std;
class rectangle 
{
    private:
    double length;
    double breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(double l,double b)
    {
        length=l;
        breadth=b;
    }
    rectangle(double side)
    {
        length=side;
        breadth=side;
    }
    double area()
    {
        return length*breadth;
    }
};
int main ()
{
    rectangle rectangle1;
    rectangle rectangle2(3,3);
    rectangle rectangle3(3);
    cout<<"\nArea of rectangle1 "<<rectangle1.area()<<endl;
    cout<<"\nArea of rectangle2 "<<rectangle2.area()<<endl;
    cout<<"\nArea of rectangle3 "<<rectangle3.area()<<endl;
}