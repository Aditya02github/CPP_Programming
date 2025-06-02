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
    int pro=n*m;
 cout<<pro/gcd(n,m);
 
    return 0;
}