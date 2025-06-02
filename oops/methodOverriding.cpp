#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public:
    void speak()

{
    cout<<"I'm an animal. I can speak."<<endl;
}
};
class Dog: public Animal
{
    // public:
    // void speak()
    // {
    //  cout<<"woo woo."<<endl;
    // }
};
int main()
{
  Dog myDog;
  myDog.speak();  // Output: woo woo.
    return 0;
    
}