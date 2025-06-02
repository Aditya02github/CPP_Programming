// Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
#include<bits/stdc++.h>
using namespace std ;
 bool isSparse(int n)
    {
       return (n&(n>>1))==0;
      
       
       
    }
int main(){
    int n;
    cin>>n;
    cout<< isSparse( n);
    return 0;
}