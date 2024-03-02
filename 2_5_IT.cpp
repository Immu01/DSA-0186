#include<iostream>
using namespace std;
class IncomeTaxCalculator 
{
private:
    float taxableIncome,tax;
public:
    void input() 
    {
        cout<<"\nEnter your Income = ";
        cin>>taxableIncome;
    }
    void calculateTax() 
    {
        if(taxableIncome<=60000)
            tax=0;
        else if(taxableIncome<=150000)
            tax=taxableIncome*0.05;
        else if(taxableIncome<=500000)
            tax=taxableIncome*0.1;
        else
            tax=taxableIncome*0.15;
    }
    void display() 
    {
        cout<<"\nYour income tax is = "<<tax<<"\n";
    }
};
int main() 
{
    IncomeTaxCalculator calculator;
    calculator.input();
    calculator.calculateTax();
    calculator.display();
}