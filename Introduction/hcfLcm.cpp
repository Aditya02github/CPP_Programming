#include<bits/stdc++.h>
using namespace std;

long hcf(long a,long b)
{
    if(a==0)
    {
        return b;
    }
    return hcf(b%a,a);
}
int main()
{


   int a,b;



   cout<<"Enter the a and b values";
   cin>>a>>b;
   cout<< "HCF"<<hcf(a, b)<<endl;
   cout<< "LCM"<<  (a*b)/hcf(a, b);


    return 0;
}