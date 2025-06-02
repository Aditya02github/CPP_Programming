#include<bits/stdc++.h>
using namespace std ;
void reverseArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}
//time complexity=O(n)

int main(){
    int arr[]={4,2,7,8,1,2,5};
    reverseArray(arr,7);
    for(int i=0;i<7;i++)
    {

        cout<<arr[i]<<" ";
    }


     
    
    return 0;
}