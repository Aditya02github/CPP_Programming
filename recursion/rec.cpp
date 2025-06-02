#include<iostream>
using namespace std;
void reachHome(int source ,int des)
{
    if(source==des)
    {
        cout<<"You reached home"<<endl;
        return;
    }
    else
    {
        cout<<"Walking towards home..."<<endl;
        reachHome(source+1,des);
    }
    
 
}
int main()
{
    int des=10;
    int source =1;
    reachHome(source,des);
    cout<<"Helloworld"<<endl;
    return 0;
}