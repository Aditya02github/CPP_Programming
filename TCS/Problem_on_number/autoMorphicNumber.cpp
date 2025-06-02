#include<bits/stdc++.h>
using namespace std ;
bool automorphic(int n)
{
      int sq=n*n;
    while(n!=0)
    {
        if(n%10!=sq%10)
        {
            
            return 0;
        }
        sq/=10;
        n/=10;

    }
    return 1;
}
int main(){
    int n;
    cin>>n;
  cout<<automorphic(n);
 
    return 0;
}