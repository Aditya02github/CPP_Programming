#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a=10;
    int *ptr=&a;
    int**ptr1=&ptr;
    cout<<ptr<<" ";
    cout<<&a<<" ";
    cout<<ptr1<<" ";
     cout<<&ptr<<" ";
     cout<<*(&a)<<" ";
     cout<<*ptr<<" ";
     cout<<*ptr1;
    return 0;
    
}