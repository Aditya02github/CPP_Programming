#include<bits/stdc++.h>
using namespace std;
int main()
{
deque<int> dq;
dq.push_back(3);//{3}
dq.push_back(7);//{3,7}
dq.push_front(9);//{9,3,7}
dq.push_front(5);//{5,9,3,7}
dq.pop_back();
for(auto it:dq)
  {
    cout<<it<<" ";
  }
dq.pop_front();
cout<<endl;
for(auto it:dq)
  {
    cout<<it<<" ";
  }
  dq.back();//to acess the last element
  dq.front();//to acess the first element


//rest function same as vector
    return 0;
}