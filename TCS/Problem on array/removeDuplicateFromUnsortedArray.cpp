#include <bits/stdc++.h>

using namespace std;

 vector<int> removeDuplicate(vector<int>& arr) {
  vector<int>ans;
      map<int,int> mp;
      for(auto i:arr)
      {
        mp[i]++;
        if(mp[i]==1)
        {
          ans.push_back(i);
        }
      }
      return ans;
 }

int main() {

  vector<int>v{4, 3, 9, 2, 4, 1, 10, 89, 34} ;
  int n = 9;

  vector<int> res=removeDuplicate(v);
  for(auto i:res)
  {
    cout<<i<<" ";
  }


  return 0;
}