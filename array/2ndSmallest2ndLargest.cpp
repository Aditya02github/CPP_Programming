
#include <bits/stdc++.h>
using namespace std; 
  int maxAnd2ndMax(int arr[],int n) {
       
 
 
  int max1=INT_MIN,max2=INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>max1)
      {
          max2=max1;
          max1=arr[i];
      }
      else if((arr[i]>max2) &&(arr[i]!=max1))
      
      {
          max2=arr[i];
          
      }
     
  }
  if(n==1||max2==INT_MIN)
  {
 
       return -1;
  }
  else{
     
      
      return max2;
  }
  
    } 

  int minAnd2ndMin(int arr[],int n) {
       
 
 
  int min1=INT_MAX,min2=INT_MAX;
  for(int i=0;i<n;i++)
  {
      if(arr[i]<min1)
      {
          min2=min1;
          min1=arr[i];
      }
      else if((arr[i]<min2) &&(arr[i]!=min1))
      
      {
          min2=arr[i];
          
      }
     
  }
  if(n==1||min2==INT_MAX)
  {
 
       return -1;
  }
  else{
     
      
      return min2;
  }
  
    } 
/* Driver code */
int main()
{
	int arr[] = { 2,2,3,4,5,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<minAnd2ndMin(arr,n) <<endl;
	cout<<maxAnd2ndMax(arr,n);
	return 0;
}


