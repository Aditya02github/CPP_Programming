#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int start, int end)
{
    if(start>end)
    {
        return;
    }
    swap(str[start], str[end]);
    start++; end--;
    reverse(str, start, end);
}
int main()
{
    string name="babbar";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    
    return 0;
}