#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> str;//["my","name","is","ankit"];
    cout << "Ankit" << endl;
    str.push_back("my");
    str.push_back("name");
    str.push_back("is");
    str.push_back("ankit");
    sort(str.begin(), str.end(),(a,b)->a.size()-b.size());//["ankit", "is", "my" ,"name"]
//lamda function 
//ccompaavle 
//comparator
//n2
    for(auto it:str){
        cout << it << " ";
    }
    return 0;
}
