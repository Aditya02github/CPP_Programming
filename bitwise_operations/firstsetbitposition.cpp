#include<bits/stdc++.h>
using namespace std ;
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        unsigned int index=1;
        while(n){
            if(n&1){
                return index;
            }
            index++;
            n=n>>1;
        }
        return 0;
    }
};
int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.getFirstSetBit(n);
    return 0;
    
    return 0;
}
