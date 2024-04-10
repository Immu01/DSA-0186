#include<iostream>
using namespace std;
int missingnum(int a[],int n)
{
    int missingnumber=1,i=0;
    while(i<n&&a[i]<=missingnumber)
    {
        missingnumber=a[i]+1;
        i++;
    }
    return missingnumber;
}
int main ()
{
    int n,a[100],i,smallestnum;
    cout<<"Enter the size of the element = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number "<<i+1<<" = ";
        cin>>a[i];
    }
    smallestnum=missingnum(a,n);
    cout<<"The smallest missing number = "<<smallestnum<<endl;
}