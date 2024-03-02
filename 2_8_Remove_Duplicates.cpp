#include <iostream>
using namespace std;
void removeDuplicates(int arr[],int& size) 
{
    if(size<=1) 
    return;
    int index=0;
    for(int i=1;i<size;i++) 
    {
        if(arr[i]!=arr[index])arr[++index]=arr[i];
    }
    size=index+1;
}
int main() 
{
    int arr[]={11,12,13,13,13,14,14,15,16,16};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array = ";
    for(int i=0;i<size;i++) 
    cout<<arr[i]<<" ";
    removeDuplicates(arr,size);
    cout<<"\nArray after removing duplicates = ";
    for (int i=0;i<size;i++) 
    cout<<arr[i]<<" ";
}