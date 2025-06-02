#include<bits/stdc++.h>
using namespace std ;
int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n)
        {
            return -1;
        }
        int index=1;
        while((n>0)&&(m>0))
        {
            if((n&1)!=(m&1))
            {
                return index;
            }
            index++;
            n=n>>1;m=m>>1;
        }
        return index;
        
    }
int main(){
    int n,m;
    cin>>n>>m;
   cout<< posOfRightMostDiffBit( m, n);
    
    return 0;
}