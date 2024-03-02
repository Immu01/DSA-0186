#include<iostream>
#include<string>
using namespace std;
class StudentRecord 
{
private:
    string name,regNo;
    float mark1,mark2,mark3,average;
    char grade;
public:
    void input() 
    {
        cout<<"Enter student details =\n";
        cout<<"Name = ";
        cin>>name;
        cout<<"Registration Number = "; 
        cin>>regNo;
        cout<<"Marks (Mark1 Mark2 Mark3) = \n";
        cin>>mark1>>mark2>>mark3;
    }
    void calculateAverage() 
    {
        average=(mark1+mark2+mark3)/3;
    }
    void calculateGrade() 
    {
        if(average>90)grade='S';
        else if(average>80)grade='A';
        else if(average>70)grade='C';
        else if(average>60)grade='D';
        else if(average>50)grade='E';
        else grade= 'F';
    }
    void display() 
    {
        cout<<"Average Marks = "<<average<<"\n";
        cout<<"Grade = "<<grade<<"\n";
    }
};
int main() 
{
    StudentRecord students[10];
    for(int i=0;i<10;++i) 
    {
        students[i].input();
        students[i].calculateAverage();
        students[i].calculateGrade();
        students[i].display();
        cout<<"\n";
    }
}