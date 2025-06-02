#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  string s;
  cin>>s;
  
  vector<int> arr;
  string curr="";
  
  for(int i=0;i<s.length();i++)
  {
    if(s[i]==' '){
      arr.push_back(stoi(curr));
      curr="";
    }else{
      curr+=s[i];
    }
  }
  arr.push_back(stoi(curr));
  
  for(auto it: arr){
    cout<<it<<" ";
  }
 
 return 0;
}