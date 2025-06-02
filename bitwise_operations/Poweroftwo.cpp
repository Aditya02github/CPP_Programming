
#include <iostream>
using namespace std;
bool Poweroftwo(int n)
{
        if(n==0)
        {
            return false;
        }
        
        
     return ((n & (n - 1))==0);
        
       
        
    
         
}
    int main()
{
  int n;
  cin>>n;
  cout<<Poweroftwo(n);

    return 0;
}