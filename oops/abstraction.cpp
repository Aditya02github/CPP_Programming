#include<bits/stdc++.h>
using namespace std ;
class Shape{ //abstarct  class 
    virtual void draw()=0;// pure virtual function
};
class Circle:public Shape{
    public :
    void draw()
    {
        cout<<"Drawing a circle\n";
    }

};

int main(){
    Circle c1;
    c1.draw();


    
    return 0;
}
// Abstarction-Hiding all unnecessary detail ,and showing only th eimportant parts.
// cna be implemented using access specifier and abstarct class
