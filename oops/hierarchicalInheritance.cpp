#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void func1()
    {
        cout<<"Function 1 in A"<<endl;
    }
};
class B:public A
{
    public:
    void func2()
    {
        cout<<"Function 2 in B"<<endl;
    }
};

class C:public A{
    public:
    void func3()
    {
        cout<<"Function 3 in C"<<endl;
    }
};
int main()
{  A obj1;
    obj1.func1();
    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
   // obj3.func2();
    

  
    return 0;
    
}