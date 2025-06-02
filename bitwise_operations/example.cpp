#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int countAllSetBits(int n) 
{
   int res = 0;
   for (int i=1; i<=n; i++)
      res += countSetBits(i);
   return res;
}

int main()
{
   int n;
   cin>>n;
   cout<<countAllSetBits(n) ;
    return 0;

    
   
}