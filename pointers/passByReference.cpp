#include<bits/stdc++.h>
using namespace std ;
void changep(int *ptr) //M1.pass by reference using pointer
{
    *ptr=20;
}
void changer(int &b) //M2. pass by refernce using alias
{
 b=30;
}

int main(){
    int a=10;
    changep(&a);
    cout<<a<<endl;
    changer(a);
    cout<<a;
    return 0;
}