#include<bits/stdc++.h>
using namespace std;
int print2largest(vector<int> &arr) {
        if(arr.size()<2)
            return -1;
        
        
        int l=INT_MIN;
        int sl=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>l)
            {
                sl=l;
                l=arr[i];
            }
            else if(arr[i]>sl &&arr[i]!=l)
            {
                sl=arr[i];
            }
        }
        
        return (sl == INT_MIN) ? -1 : sl;
    }

int main() {
    vector<int>arr={1,2,4,7,7,5};  
  
       
        int sL=print2largest(arr);
  
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}


