#include<bits/stdc++.h>
using namespace std ;
void func()
{
    static int x=0;
    cout<<"x: "<<x<<endl;
    x++;
}

int main(){
    func();
    
    return 0;
}