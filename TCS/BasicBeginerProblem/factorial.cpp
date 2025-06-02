#include<bits/stdc++.h>
using namespace std ;
void Factorial(int n)
{
   int prod=1;
   int count=1;
while(count<=n)
{
    prod=prod*count;
    count++;
}
cout<<prod;



}



int main(){
    int n=5;
    Factorial(n);

    return 0;
}