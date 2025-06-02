#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
        int max=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        return max;
}

 int main() {
    vector<int> arr = {1, 2, 3, 40, 5};
    int max = largest(arr);
    cout << "Largest element in the array is: " << max << endl;
    return 0;
 }
