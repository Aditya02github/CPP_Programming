# include<bits/stdc++.h>
 using namespace std ;
 int main()
 {
   pair<int ,int> p ={1,3};
   cout<<p.first;
   cout<<endl;
   
   cout<<p.second;
   cout<<endl;
   pair<int,pair<int,int>> q;
    q={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
      cout<<endl;
    pair<int ,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[1].first<<" "<<arr[2].first<<" "<<arr[0].second<<" "<<arr[1].second<<" "<<arr[2].second;
    return 0;
 }
