#include<bits/stdc++.h>
using namespace std;
void getMedian(int arr[],int n)
{
    sort(arr,arr+n);
    if(n%2==0)
    {
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else
    {
        cout<<arr[(n/2)];
    }
}
int main()
{
    int arr1[] = {4,7,1,2,5,6};
    int n = 6;
    int arr2[] = {3,2,1,4,5};
    int n2=5;
    cout<<"The median of the array 1 is: ";
    getMedian(arr1,n);
    cout<<endl;
     cout<<"The median of the array 2 is: ";
    getMedian(arr2,n2);
    return 0;
}