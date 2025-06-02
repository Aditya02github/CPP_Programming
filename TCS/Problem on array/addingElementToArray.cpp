#include<bits/stdc++.h>
using namespace std ;




int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatbegin(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}