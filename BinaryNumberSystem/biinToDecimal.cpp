#include<bits/stdc++.h>
using namespace std ;
int binToDecimal(int binNum )
{
    int ans=0;
    int pow=1;
    while(binNum>0)
    {
        int rem=binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;

       


    }
    return ans;

}
int main(){
    cout<<binToDecimal(1010);
    
    return 0;
}