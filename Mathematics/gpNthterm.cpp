#include<bits/stdc++.h>
using namespace std ;
int gpNthTerm(int first, int second, int n)
{
    float r=second/first;
if(n==1)
{
    return first;
}
if(n==2)
{
    return second;
}

return first*pow(r,n-1);
}
int main(){
    int first;
    int second;
    int n;
    cin>>first>>second>>n;
    cout<<gpNthTerm(first, second, n); 
    
    return 0;
}