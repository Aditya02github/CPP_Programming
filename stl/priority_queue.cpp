# include<bits/stdc++.h>
 using namespace std ;
 int main()
 {

  // push,pop operation occur in log(n) complexity
  //top opration in O(1)
  //maxi heap
    priority_queue<int > pq;
    pq.push(6);//{6}
  pq.push(5);//{6,5}
  pq.push(10);//{10,6,5}

  pq.push(9);{10,9,6,5}
   pq.top();//10
   pq.pop();
   //{9.6,5}
  
  //min heap
  priority_queue<int,vector<int>,greater<int>> pr;
  pr.push(4);
   pr.push(7);
    pr.push(3);//{3,4,7}
    pr.top();//3

    return 0;
 }