#include<bits/stdc++.h>
#include<map>
# include<unordered_map>

using namespace std;
int main()
{
   map<string, int>m;
   // insertion

   //1
   pair<string, int>p=make_pair("babbar",3);
    m.insert(p);

   //2
   pair<string,int> pair2("love",2);
   m.insert(pair2);



   //3
   m["mera"]=1;


   //Search

   cout<<m["babbar"]<<endl; // will print 3
   cout<<m.at("love")<<endl; // will print 2
   cout<<m["mera"]<<endl; // will print 1
   cout<<m["baz"]<<endl; // will print
    cout<<m.at("baz")<<endl;
    //size
   cout<< m.size()<<endl; // will print
   cout<< m.count("love")<<endl; // will print

   //erase
   m.erase("love");
   cout<<m.size()<<endl; // will print

   //iterator
   map<string, int>::iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }

    return 0;
}