#include<iostream>
using namespace std;
class AddAmount
{
private:
    double amount;
public:
    AddAmount()
    {
        amount=50;
    }
    AddAmount(double a)
    {
        amount=50+a;
    }
    double getAmount()
    {
        return amount;
    }
};
int main()
{
    double enteredAmount;
    cout<<"Enter the amount in the piggy bank = ";
    cin>>enteredAmount;
    AddAmount obj(enteredAmount);
    cout<<"The total amount in the piggy bank = "<<obj.getAmount()<< endl;
}