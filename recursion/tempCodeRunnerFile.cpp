#include<iostream>
using namespace std;// sum of arr element using recursion

int sum(int arr[], int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int remainingPart=sum(arr+1,size-1);  // recursion call for remaining array elements
    return arr[0]+remainingPart;

}