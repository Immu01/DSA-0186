#include<iostream>
#include<cmath>
using namespace std;
class Shape 
{
public:
    double volume;
    Shape():volume(0){}
    Shape(double side, bool isCube) 
    {
        if(isCube)
            volume=pow(side,3);
        else
            volume=0;
    }
    Shape(double radius,double height,bool isCylinder) 
    {
        if(isCylinder)
            volume=M_PI*pow(radius,2)*height;
        else
            volume=0;
    }
};
int main() 
{
    double side,radius,height;
    cout<<"Enter side of cube = ";
    cin>>side;
    cout<<"Enter radius and height of cylinder = ";
    cin>>radius>>height;
    Shape cube(side,true);
    Shape cylinder(radius,height,true);
    cout<<"Volume of Cube = "<<cube.volume<<endl;
    cout<<"Volume of Cylinder = "<<cylinder.volume<<endl;
}