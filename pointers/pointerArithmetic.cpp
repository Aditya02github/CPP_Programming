#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[]={1,2,3,4,5};
    int a=10;
    int*ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    ptr=ptr+2;
    cout<<ptr<<endl;
    cout<<*(arr+1)<<endl;
    
    //subtract pointer , since adding two pointer not allow
    
    int*ptr2;
    int*ptr1=ptr2+2;
    cout<<ptr1-ptr2<<endl;
    
    int *ptr3;
    int *ptr4=ptr3;
    cout<<(ptr4>ptr3);\
    //similarly >,<,<=,>=,==
    
    
    
    


    return 0;
}