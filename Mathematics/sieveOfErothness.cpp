#include<bits/stdc++.h>
using namespace std ;
void primeSieve( int n)
{
    vector<bool>prime(n+1, true);
    for(int i=2; i*i<n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
                prime[j]=false;
        }
    }
    cout<<"Prime numbers between 1 and "<<n<<" are: \n";
    for(int p=2; p<=n; p++)
        if(prime[p])
            cout<<p<<" ";
    
 
}
int main(){
    int n;
    cin>>n;
     primeSieve(n);

    
    return 0;
}