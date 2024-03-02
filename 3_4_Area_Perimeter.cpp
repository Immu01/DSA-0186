#include<iostream>
using namespace std;
class Area
{
    public:
    void area(int side)
    {
        cout<<"The area of square = "<<side*side<<endl;
    }
    void area(int length,int breadth)
    {
        cout<<"The area of rectangle = "<<length*breadth<<endl;
    }
};
int main ()
{
    Area obj;
    int side,length,breadth;
    cout<<"Enter the side of a square = ";
    cin>>side;
    cout<<"Enter the length and breadth of a rectangel = \n";
    cin>>length>>breadth;
    obj.area(side);
    obj.area(length,breadth);
}