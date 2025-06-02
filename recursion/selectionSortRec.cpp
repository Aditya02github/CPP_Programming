#include<bits/stdc++.h>
// time=O(n squre) in all cases,space=O(1)
using namespace std;
void Selection_sort(vector<int>& arr,int size)

{ int start = 0;
//base
    if(start==size-2)
        return true;

    
    //process
    {  int min=start
        for(int j=i+1 ; j<size ; j++)
        {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
        }
        swap(arr[min], arr[i]);
    }
    //recursive
    Selection_sort(arr,start+1);
}    


}
int main()
{

 vector<int> arr;
 arr={64,25,12,22,11};
 int  size=arr.size();
 Selection_sort(arr,size);
 for(int i=0;i<arr.size();i++)
 {
    cout<<arr[i]<<" "<<endl;
 }



    return 0;
}