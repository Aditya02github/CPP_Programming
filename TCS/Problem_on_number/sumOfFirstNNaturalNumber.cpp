#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  N=9876543;
    if(N&1==1)
    {
        long long sum = N * ((N + 1) / 2); // when N is odd
        cout<<sum;
    }
    else{
        long long sum = (N / 2) * (N + 1); // when N is even
        cout<<sum;
    }
    
   
   
}


