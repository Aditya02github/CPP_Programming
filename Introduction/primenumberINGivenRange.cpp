#include<bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    int count=0;
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i == 0)
        {
            count++;


            if(N/i!=i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
int main()
{
int m,n;
cin>>m>>n;
for(int i=m;i<=n;i++)
{
    if(isPrime(i));
    {
        cout<<i<<" ";
    }
}
return 0;
}
