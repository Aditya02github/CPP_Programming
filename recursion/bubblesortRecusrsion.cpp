#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int> &arr,int n)
{
    if(n==0||n==1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        sortArray(arr,n-1); // recursive call for remaining array
    }
}
int main()
{  int size=0;
  cin>>size;
  vector<int> arr(size);
   for(int i=0;i<size;i++)
   {
    cin>>arr[i];
   }
    sortArray(arr,size);
for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";  // prints sorted array in ascending order
    }
        return 0;
}