#include<iostream>
#include<string>
using namespace std;
class Employee 
{
public:
    string emp_name,address,mail_id,mobile_no;
};
class Programmer:public Employee 
{
public:
    double BP,DA,HRA,PF,club_fund;
    void generatePaySlip()
    {
        DA=0.97*BP;
        HRA=0.10*BP;
        PF=0.12*BP;
        club_fund=0.001*BP;
        double gross_salary=BP+DA+HRA;
        double net_salary=gross_salary-(PF+club_fund);
        cout<<"Pay Slip for Programmer = \n";
        cout<<"Employee Name = "<<emp_name<<"\n";
        cout<<"Basic Pay = "<<BP<<"\n";
        cout<<"DA = "<<DA<<"\n";
        cout<<"HRA = "<<HRA<<"\n";
        cout<<"PF = "<<PF<<"\n";
        cout<<"Club Fund = "<<club_fund<<"\n";
        cout<<"Gross Salary = "<<gross_salary<<"\n";
        cout<<"Net Salary = "<<net_salary<<"\n\n";
    }
};
int main() 
{
    Programmer programmer;
    programmer.emp_name="Imran";
    programmer.BP = 1000000.0;
    programmer.generatePaySlip();
}