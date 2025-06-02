# include<bits/stdc++.h>
using namespace std;
int fun(int n,int k)
{
if(n>>(k-1)&1==1)
{
    return 1; // 1 kth bit is set

}
else
{
    return 0;// kth bit is not set
}

}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<fun(n,k);
}