#include<iostream>
using namespace std;
class MyClass 
{
public:
    MyClass();
    void displayMessage();
};
MyClass::MyClass() 
{
    cout<<"Constructor is called\n";
}
void MyClass::displayMessage() 
{
    cout<<"Displaying a message\n";
}
int main() 
{
    MyClass obj;
    obj.displayMessage();
}