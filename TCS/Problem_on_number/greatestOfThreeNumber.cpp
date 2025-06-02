#include<bits/stdc++.h>
using namespace std ;


int main(){

    int a,b,c;
    a=8;
    b=4;
    c=9;
   // cout<<max({a,b,c});
   int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<max;


 
    return 0;
}