#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }
   
 }
}
int main()
{
   int arr[6]={12,45,23,51,19,8};
   selectionSort(arr,6);
    return 0;
}