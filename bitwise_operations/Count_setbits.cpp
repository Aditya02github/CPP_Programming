//lookup table method  time complexity=theta(1)
//best algorithm in time complexity
//__builtin_popcount(number) : library function can also used directly
#include <iostream>
using namespace std;
int Count_Setbits(int n){
    int table[256];
    table[0]=0;
    for(int i=1; i<256; i++)
    {
        table[i] = (i&1)+table[i/2];
   
    }
    // for 32 bit integer brakesd into 8-8 bit
   
    int result=table[n&0xff];
    n=n>>8;
    result=result+table[n&0xff];
    n=n>>8;
    result=result+table[n&0xff];
    n=n>>8;
    result=result+table[n&0xff];
    return result;
}
int main()
{
  int n;
  cin>>n;
  cout<<Count_Setbits(n);

    return 0;
}