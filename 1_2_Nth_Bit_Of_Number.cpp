#include<iostream>
using namespace std;
int main ()
{
    int num,pos,result=0;
    cout<<"Enter the number =  \n";
    cin>>num;
    cout<<"Enter the position of the bit =  \n";
    cin>>pos;
    if(pos<0)
    {
        exit(0);
    } 
    else 
    {
        result = num | (1 << pos);
    }
    cout<<"\nAfter setting the "<<pos<<"th bit ,the new number = "<<result<<endl;
}