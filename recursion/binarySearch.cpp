#include<iostream>
using namespace std;
void print(int arr[],int s,int e)
{
    for(int i = s; i <=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int k)
{    print(arr,s,e);
    //base case
    if(s>e)
    {
        return -1;
    }

    int mid=s+(e-s)/2;
    cout<<"mid element"<<arr[mid]<<" "<<endl;
    //found
    if(arr[mid]==k)
    {
        return 1;
    }

    if(arr[mid]>k)
    {
        return binarySearch(arr,s,mid-1,k);
    }
    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }

    
}
int main()
{
    int arr[8]={2,12,25,34,45,54,63,77}; //
  cout<<"Present or not"<< binarySearch(arr,0,7,77); //

    
    return 0;
}