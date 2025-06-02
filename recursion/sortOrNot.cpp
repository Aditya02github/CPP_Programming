#include<iostream>
using namespace std;
bool isSort(int arr[],int size)
{
    if(size == 0||size == 1)
        return true;
        
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {

   
    bool remainingPart=isSort(arr+1,size-1);
    return remainingPart;
     }
}
int main()
{
  int arr[6]={0,1,2,3,5,5};
  bool ans=isSort(arr, 6);
  if(ans)
  {
    cout<<"Array is sorted in ascending order."<<endl;
  }
  else{
    cout<<"Array is not sorted in ascending order."<<endl;
  }
    return 0;
}