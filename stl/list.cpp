# include<bits/stdc++.h>
 using namespace std ;
 int main()
 {
  list<int> li;
  li={5,6,9};
  li.push_back(10);//{5,6,9,10}
  
  li.push_front(1);//{1,5,6,9,10}
  li.pop_back();
  li.pop_front();for(auto it:li)
  {
    cout<<it<<" ";
  }
  
  //rest function same as vector
    return 0;
 }