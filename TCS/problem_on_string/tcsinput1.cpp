#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(), '['), s.end());
    s.erase(remove(s.begin(),s.end(), ']'), s.end());
    vector<int>arr;
    string curr="";
    int n=s.length();
    int i=0;
    while(i<n){
      if(s[i]==' '){
        
        arr.push_back(stoi(curr));
        curr="";
        
      }
      else{
        curr += s[i];
      }
      i++;
    }
    if(!curr.empty()) {
      arr.push_back(stoi(curr));
    }
    
    for(auto it:arr){
      cout<<it<<" ";
    }
    return 0;
}