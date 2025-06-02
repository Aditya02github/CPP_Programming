#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr,int k)
{
    
    int n=arr.size();
    if(n==0)return;
    int index=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+index);
    reverse(arr.begin()+index,arr.end());
    return;
    // Your code here
}
int main()
{
    int k=3;
    vector<int>arr{1,2,3,4,5,6,7};
    rotate(arr,k);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}
