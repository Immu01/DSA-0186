#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int findMostFrequentElement(const vector<int>& arr) 
{
    unordered_map<int,int> frequencyMap;
    for(size_t i=0;i<arr.size();i++)
        frequencyMap[arr[i]]++;
    int mostFrequentElement=arr[0];
    int maxFrequency=frequencyMap[arr[0]];
    for(size_t i=0;i<arr.size();i++) 
    {
        if(frequencyMap[arr[i]]>maxFrequency) 
        {
            mostFrequentElement=arr[i];
            maxFrequency=frequencyMap[arr[i]];
        }
    }
    return mostFrequentElement;                 
}
int main() 
{
    int size;
    cout<<"Enter the size of the array = ";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter elements of the array = ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int result=findMostFrequentElement(arr);
    cout<<"Most frequent element = "<<result<<endl;
}