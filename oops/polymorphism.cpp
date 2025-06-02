 #include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void sayhello()
    {
        cout<<"Hello from class A"<<endl;
    }
    void sayhello(string name)
    {
        cout<<"Hello from class A"<<endl;
    }
};

int main()
{
    // function overloading
  A obj1;
  obj1.sayhello(); 
    return 0;
    
}
//Polymorphism- many forms 
//It is the ability of object to take on different forms or behave in different ways depending on the context in which they are used.
//1. compile time -constructor overloading, function  overloading,operator overloading

//2.run-time-fuction overriding,virtual function