#include<bits/stdc++.h>
using namespace std ;
int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
            break;
        }
    
    }
    return -1;

}

int main(){
    int arr[]={4,2,7,8,1,2,5};

    cout<<linearSearch(arr,7,8);


    
    return 0;
}