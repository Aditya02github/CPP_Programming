#include<bits/stdc++.h>
using namespace std ;
void ReverseNum(int n)
{
    int temp=n;
    int rev=0;
    while(n>0)
    {
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
}

int main(){
    int n= 459754;
    ReverseNum(n);

    
    return 0;
}