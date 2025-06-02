#include <bits/stdc++.h>

using namespace std;
int countwaydistinct(long nstairs)
{
    //base case
    if(nstairs<0)
    {
        return 0;
    }
    if(nstairs==0)
    {
        return 1;
    }
    int ans=countwaydistinct(nstairs-1)+countwaydistinct(nstairs-2);
return ans;
}
int main ()

{
     cout<<countwaydistinct(5);

    return 0;
}