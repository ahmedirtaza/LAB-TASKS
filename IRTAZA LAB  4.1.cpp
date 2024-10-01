#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i=1; i<=size; i++)
    {
        if(arr[i] == target)
        {
             return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10];
    int size;
    cout<<"Enter array size: "<<endl;
    cin>>size;
    for(int i=1; i<=size; i++)
    {
        cout<<"\n Enter element at index: "<< i <<" is: "<<"\t";
        cin>>arr[i];
    }
    size=sizeof (arr) / sizeof (arr[0]);
    int target;
    cout<<"\nSearch value: "<<"\t";
    cin>>target;
    int result = linearSearch(arr, size, target);
    if(result!=-1)
    {
        cout<<"Index " << result <<endl;
    }
    else
    {
        cout<<"Value not Found"<<endl;
    }
    return 0;
}