#include<iostream>
using namespace std;
class Box 
{
public:
    double length;
    void setWidth(double w){width=w;}
    double getWidth() const {return width;}
private:
    double width;
};
int main() 
{
    Box myBox;
    myBox.length = 5.0;
    myBox.setWidth(3.0);
    cout<<"Length = "<<myBox.length<<endl;
    cout<<"Width = "<<myBox.getWidth()<<endl;
}