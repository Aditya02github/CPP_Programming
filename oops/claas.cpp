
#include <bits/stdc++.h>
using namespace std;
class Hero
{ 
    //properties
    private:
    int health;
    public:
    char level;
    Hero()
    {
        cout << "constructor called" << endl;
    }
    void print()
    {
        cout<<level;
    }
    int getHealth()
    {
        return health ;
    }
    int getLevel()
    {
        return level;
    }
    int setHealth(int h)
    {
        health=h ;
    }
    int setLevel(char ch)
    {
        level=ch;
    }
};
int main()
{
    //static allocation
 Hero h1;

h1.setHealth(70);
 cout<<h1.getHealth();
 //cout<<h1.health<<endl;
 cout<<h1.level<<endl;
 

 //dynamic allocation
 Hero *h2 = new Hero;
 h2->setHealth(80);
 cout<<h2->getHealth();
 //cout<<h2->health<<endl;
 //cout<<h2->level;

 delete h2;



    return 0;
}