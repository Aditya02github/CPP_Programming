#include<bits/stdc++.h>
using namespace std ;
bool isPrime(int N)
{
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0)
            return false;
    }
    return true;
}

    void divisors3(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i))
        {
            int m=i*i;
            if(m<=n)
            {
                cout<<i*i<<" ";
            }
            
        }
    }

}

int main(){
    int n;
    cin>>n;
    divisors3(n);
    return 0;
}