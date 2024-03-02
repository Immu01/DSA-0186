#include<iostream>
using namespace std;
void AgeAndCalculateROI(int age,double principal,int years)
{
    int senior=60;
    double SI,ROI;
    if(age>=senior)
    {
        ROI=0.12;
        cout<<"\nYou are a senior citrizen\n";
    } else
    {
        ROI=0.1;
        cout<<"\nYou are a normal person\n";
    }
    SI=principal*ROI*years;
    cout<<"\nSimple intrest = "<<SI<<endl;
}
int main ()
{
    int personAge,years;
    double principal;
    cout<<"\nEnter the age = ";
    cin>>personAge;
    cout<<"\nEnter the principal ammount = ";
    cin>>principal;
    cout<<"\nEnter the number of years = ";
    cin>>years;
    AgeAndCalculateROI(personAge,principal,years);
}