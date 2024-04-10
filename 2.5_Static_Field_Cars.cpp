#include<iostream>
using namespace std;
struct car
{
    int ID;
    string car_n;
    double marks;
};
int main ()
{
    int n,i,ID,searchID;
    string car_n;
    double marks;
    cout<<"\nEnter the number of cars = ";
    cin>>n;
    car cars[n];
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter the car ID = ";
        cin>>cars[i].ID;
        cout<<"\nEnter the name of the car = ";
        cin>>cars[i].car_n;
        cout<<"\nEnter the marks for the car (0-10) = ";
        cin>>cars[i].marks;
    }
    cout<<"\nEnter the serchID of the car for details : \n";
    cin>>searchID;
    for(i=1;i<=n;i++)
    {
        if(cars[i].ID==searchID)
        {
            cout<<"\nThe details of the car for Id "<<searchID<<"\n";
            cout<<"\nCar ID = "<<cars[i].ID;
            cout<<"\nName of the car = "<<cars[i].car_n;
            cout<<"\nCar marks = "<<cars[i].marks;
            break;
        }
    }
    if(i==n)
    {
        cout<<"\nThe car with ID "<<searchID<<" is not found";
    }
}