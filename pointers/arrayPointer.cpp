#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[]={1,2,3,4,5};
    cout<<*arr;
    int a=15;
    arr=&a;// since array pointer are co stant pointer
    return 0;
}