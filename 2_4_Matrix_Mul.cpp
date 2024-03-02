#include<iostream>
using namespace std;
int main ()
{
    int m1[3][3],m2[3][3],i,j,k,m3[3][3];
    cout<<"\nEnter the elements in matrix 1 \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"--------------------\n";
    cout<<"\nEnter the elements in matrix 1 \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m2[i][j];
        }
    }
    cout<<"matrix 1 >\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"matrix 2 >\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m2[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=0;
            for(k=0;k<3;k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
        cout<<endl;
    }
    cout<<"Multiplication of matrix m1 and m2 - m3 = \n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m3[i][j]<<"\t";
        }
        cout<<endl;
    }
}