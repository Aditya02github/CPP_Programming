
#include <bits/stdc++.h>
using namespace std;
void Swap_Alternate(vector<int> vec, int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        {
            swap(vec[i], vec[i+1]);
        }
    }
    for(int i=0;i<n;i=i+1)
    {
        cout<<vec[i]<<" ";
    }
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
   Swap_Alternate(v, n);

    return 0;
}