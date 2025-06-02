#include<bits/stdc++.h>
using namespace std;
   int hash[1000000]={0};
int main()
{
    // inside main only arr size decared can be 1000000
    //globally 10^8 

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n,0);
    
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

     
        for(int i=0; i<n; i++)
        {
            hash[arr[i]]++;
        } 
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        int x;
        cout<<"Enter the element to check frequency: ";
        cin>>x;
        cout<<"Frequency: "<<hash[x]<<endl;
    }
    return 0;
    
}