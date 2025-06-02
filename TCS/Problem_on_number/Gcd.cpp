#include<bits/stdc++.h>
using namespace std ;
int gcd(int x, int y)
{
    if(x==0)
    {
        return y;
    }
    else return gcd(y%x,x);
}

int main(){
    int n ,m;
    cin>>n>>m;
 cout<<gcd(n,m);
 
    return 0;
}