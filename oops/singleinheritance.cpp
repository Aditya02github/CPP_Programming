#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int weight; //
    int age; //

    public:
    void speak()
    {
        cout<<"I'm an animal. I can speak."<<endl;
    }
};
class Dog:public Animal
{

};
int main()
{
  Dog d;
  d.speak(); 
  cout<<d.age<<endl;
    return 0;
    
}