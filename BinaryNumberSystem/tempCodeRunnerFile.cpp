//convert -8 to binary & reverse
#include<bits/stdc++.h>
using namespace std ;

int main(){
   int  n=567;
    int revNum=0;
    while(n>0)
    {
       revNum= revNum*10+ n%10;
       n/=10;
    }
    cout<<revNum;
    
    return 0;
}