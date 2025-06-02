
// Question 2: Write a program to implement a stack using vector. Implement functions to push, pop, and display the stack.
#include<bits/stdc++.h>
using namespace std ;
class Stack
{
    vector<int>v;
    public:
    void push(int val)//O(1)
    {
        v.push_back(val);

    }
     void pop()//O(1)
    {
        v.pop_back();

        
    }
    int top()
    {
        return v[v.size()-1];

    }
    bool empty()
    {
        return v.size()==0;
    }
   

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();


    }

    
    return 0;
}