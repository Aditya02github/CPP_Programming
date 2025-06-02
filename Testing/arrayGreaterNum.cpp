#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& A) {
    int n = A.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= A[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        }
        st.push(A[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    vector<int> res = nextGreaterElements(A);
    for (int val : res)
        cout << val << " ";
    cout << endl;

    return 0;
}
