#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int>arr,int x,int n)
{  
     int ans = n;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
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
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}