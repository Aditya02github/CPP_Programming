//time complexity= O(nloglogn)
#include <bits/stdc++.h>
using namespace std;
void  Prime_sieve(int n)
{
    vector<int>vec(n+1,1);
    for(int i=2;i*i<=n;i++)
    {
        if(vec[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                vec[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(vec[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
  int n;
  cin>>n;
   Prime_sieve(n);
    return 0;
}