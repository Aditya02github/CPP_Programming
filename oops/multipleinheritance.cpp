#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public:
    int weight; //
    int age; //

    public:
    void bark()
    {
        cout<<"I'm an animal. I can bark";

}

};
class Human{
    public:
    string color;
    public:
    void speak()
    
    {
        cout<<"I'm a human. I can speak."<<endl;
    }
};
//Multiple inheritance
class Hybrid:public Animal,public Human
{

};


int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
    
}