#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cout<<"Enter the number"<<endl;;
    cin>>n;
    int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0)
{
    sum+=i;
}
}
if(sum>n)
{
    cout<<"AbundantNumber";
}
else{
    cout<<"Not Abundant Number";
}
    return 0;
}