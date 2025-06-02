//bruteforce
/*
#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    vector<int>visited(n, false);
    
        for (int i = 0; i < n; i++)
        {
            
            if(visited[i]==true)
            {
                continue;
            }
            int count = 1;
            for(int j = i+1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = true;
                    count++;
                }
                
            }
            cout << arr[i] << " : " << count << endl;
        }
}







int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
*/
//map

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
   
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" :"<<x.second<<endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}