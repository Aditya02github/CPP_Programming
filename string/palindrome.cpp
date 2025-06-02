#include <bits/stdc++.h> 

int getLength(char name[])
{  
   int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char arr[],int n)
{
   
   int start=0;
    int end =n-1;
    while(start<end)
    {
        if(arr[start++]==arr[end--])
        else
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    char name[20];
    cin>>name;
    int len =getLength(char name[])
{  
    cout<<"Palindrome or not:"<< checkPalindrome(name,len);


    return 0;
}