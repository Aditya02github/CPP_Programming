//convert -8 to binary & reverse
#include<bits/stdc++.h>
using namespace std ;
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}


int main(){
    cout<<isPowerOfTwo(6);
    
    return 0;
}