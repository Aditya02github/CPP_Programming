#include<iostream>
using namespace std;
//USING single pointer approach
bool checkPalindrome(string str,int index)
{
    int n=str.length();
   if(index>=n/2)
     return true;
   if(str[index]!=str[n-index-1]) return false;


   else
   { index++;
    return checkPalindrome(str,index+1);
   }
}



int main()
{
  string name="mom";
  bool isPalidrome=checkPalindrome(name,0);
  if(isPalidrome)
  {
    cout<<"its a palindrome"<<endl;

  }
  else{
    cout<<endl;
    cout<<"its not a PALINDROME."<<endl;
  }
    return 0;
}