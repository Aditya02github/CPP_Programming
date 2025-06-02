// Given a non-negative integer n. The task is to check if it is a power of 2. 
#include<bits/stdc++.h>
using namespace std ;
 bool isPowerofTwo(long long n) {
        if(n==0)
            return 0;

       return ((n&(n-1))==0);
    }
int main(){
    long long n;
    cin>>n;
   cout<< isPowerofTwo( n);
    
    return 0;
}