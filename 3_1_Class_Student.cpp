#include <iostream>
#include <string>
using namespace std;
class Student 
{
private:
    string name;

public:
    Student(string studentName="Unknown") 
    {
        name=studentName;
    }
    void printName() 
    {
        cout<<"Student Name = "<<name<<endl;
    }
};
int main() 
{
    Student student1;
    Student student2("Imran");
    Student student3("Immu");
    student1.printName();
    student2.printName();
    student3.printName();
}