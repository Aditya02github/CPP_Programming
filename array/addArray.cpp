#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>& v)
{
    int start=0, end=v.size()-1;
    while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return;
}
void addArray(vector<int> &v1, int n, vector<int> &v2, int m)
{
int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;
    while(i>=0 && j>=0)
    {
        int sum=v1[i]+v2[j]+carry;
        carry=sum/10;
        ans.push_back(sum%10);
        i--;
        j--;
    }
//first case
while(i>=0)
{
    int sum=v1[i]+carry;
    carry=sum/10;
    ans.push_back(sum%10);
    i--;
}
//case 2
while(j>=0)
{
    int sum=v2[j]+carry;
    carry=sum/10;
    ans.push_back(sum%10);
    j--;
}
while(carry!=0)
{
     int sum=carry;
    carry=sum/10;
    ans.push_back(sum%10);
}
  reverse(ans);
  for(auto x:ans)
    cout<<x;
  cout<<endl;

}

int main()
{

    vector<int> v1{2,3,5,6};
    vector<int> v2{ 9,9,9,9,8};
    int n1=v1.size();
    int n2=v2.size();
    addArray(v1,n1, v2,n2);
    
    return 0;
    
}