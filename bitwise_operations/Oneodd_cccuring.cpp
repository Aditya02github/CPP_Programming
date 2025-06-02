
#include <bits/stdc++.h>
using namespace std;
int Odd_Ocurrence(vector<int> vec, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ vec[i];
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << Odd_Ocurrence(v, n);

    return 0;
}