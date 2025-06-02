#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& v,int size)
{
    int count = 0;// no of comparison 
    bool isSwapped=1;// for best case performance
  for(int i=0;(i<size-1)&&isSwapped;i++)
  {   
    isSwapped=0;
     for(int j=0;j<size-i-1;j++)
     {
        count++;
        if(v[j] > v[j+1])
        {
            swap(v[j], v[j+1]);
            isSwapped=1;
        }
     }
  }
  cout<<"\nNumber of comparisons: "<<count<<endl;
   }


int main()
{

    int n;
    cout<<endl;
    cin>>n;

    vector<int>v(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    bubbleSort(v,n);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
     }
   
    return 0;
}