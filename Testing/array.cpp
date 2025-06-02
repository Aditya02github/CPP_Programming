#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void sortAlmostSortedArray(vector<int>& arr, int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Build the initial heap with first k+1 elements
    for (int i = 0; i <= k && i < n; ++i) {
        minHeap.push(arr[i]);
    }

    int index = 0;
    for (int i = k + 1; i < n; ++i) {
        arr[index++] = minHeap.top();
        minHeap.pop();
        minHeap.push(arr[i]);
    }

    // Extract remaining elements from the heap
    while (!minHeap.empty()) {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }

    // Output the sorted array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sortAlmostSortedArray(arr, n, k);
    }

    return 0;
}
