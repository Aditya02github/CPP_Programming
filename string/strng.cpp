#include<iostream>
using namespace std;
void reverse( char arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(arr[start++],arr[end--]);
    }
}
int getLength(char name[])
{  
   int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin>>name;
    int len=getLength(name);
    
    cout<<getLength(name)<<endl;
    reverse(name,len);
    cout<<"Your name is:"<<name;
    return 0;
}