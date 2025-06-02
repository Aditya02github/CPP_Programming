#include<bits/stdc++.h>
using namespace std ;
  int facDigits(int N){
if (N < 0)
        return 0;

    // base case
    if (N <= 1)
        return 1;

    // else iterate through n and calculate the
    // value
    double digits = 0;
    for (int i = 2; i <= N; i++)
    {
         digits += log10(i);
       cout<<digits<<" ";
    }
       
    
    return floor(digits)+1 ;
    }
int main(){
    int n;
    cin>>n;
    cout<<facDigits(n);

    
    return 0;
}