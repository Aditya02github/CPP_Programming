#include<bits/stdc++.h>
using namespace std;
int cubeRoot(int n)
{
    int start=1;
    int end=n;
    int ans;
    while(start<=end)
    {
        int mid= start+(end-start)/2;
        long long cube= (long long)mid*mid*mid;
        if(cube==n)
        {
            return mid;
        }

        if(cube<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    
    }
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<cubeRoot(n);  // Function call to find cube root of n using binary search algorithm. 
  
  
    return 0;
    
}