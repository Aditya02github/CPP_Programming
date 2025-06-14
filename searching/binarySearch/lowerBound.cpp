#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr,int n,int x)
{  
     int ans = n;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
      
}
  return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}