#include <iostream>
using namespace std;
int main() 
{
    float marks[4],total=0,aggregate;
    cout<<"Enter marks in four subjects\n";
    for(int i=0;i<4;i++) 
    {
        cin>>marks[i];
        total+=marks[i];
    }
    aggregate=total/4;
    cout<<"Total marks = "<<total<<"\n";
    cout<<"Aggregate = "<<aggregate<<"\n";
    if(aggregate>75)cout<<"Grade = Distinction\n";
    else if(aggregate>=60&&aggregate<75)cout<<"Grade = First Division\n";
    else if(aggregate>=50&&aggregate<60)cout<<"Grade = Second Division\n";
    else if(aggregate>=40&&aggregate<50)cout<< "Grade = Third Division\n";
    else cout<<"Grade = Fail\n";
}