#include<iostream>
using namespace std;// sum of arr element using recursion

bool linearSearch(int arr[], int size,int k)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }
    bool remainingPart=linearSearch(arr+1,size-1,k);// recursion call for remaining array elements
    return remainingPart;

}
int main()
{
    int arr[7]={0,1,2,3,4,9,6}; //
    cout<<linearSearch(arr,7,5); // function call

    
    return 0;
}