#include<iostream>
#include<cmath>
using namespace std;
class Shape 
{
public:
    double area;
    Shape():area(0){}
    Shape(double radius) 
    {
        area=M_PI*radius*radius;
    }
    Shape(double length,double width) 
    {
        area=length*width;
    }
    Shape(double base,double height,bool isTriangle) 
    {
        if(isTriangle)
            area=0.5*base*height;
        else
            area=0;
    }
};
int main() 
{
    double radius,length,width,base,height;
    cout<<"Enter radius of circle = ";
    cin>>radius;
    cout<<"Enter length and width of rectangle = ";
    cin>>length>>width;
    cout<<"Enter base and height of triangle = ";
    cin>>base>>height;
    Shape circle(radius);
    Shape rectangle(length,width);
    Shape triangle(base,height,true);
    cout<<"Area of Circle = "<<circle.area<<endl;
    cout<<"Area of Rectangle = "<<rectangle.area<<endl;
    cout<<"Area of Triangle = "<<triangle.area<<endl;
}