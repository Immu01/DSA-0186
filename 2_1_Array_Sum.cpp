#include<iostream>
using namespace std;
int main ()
{
    int n,a[100],i,sum=0;
    cout<<"\nEnter the size of the array = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter number "<<i+1<<" = ";
        cin>>a[i];
    }
    cout<<"\nThe elements in the array are [";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
    for(i=0;i<=n;i++)
    {
        sum += i;
    }
    cout<<"The sum of elements in the array = "<<sum<<endl;
}