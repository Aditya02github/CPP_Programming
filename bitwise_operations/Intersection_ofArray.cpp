// given sorted order of elements
#include <bits/stdc++.h>
using namespace std;
void IntersectionArr(vector<int> vec1, vector<int> vec2)
{
   vector<int> ans;
   int i = 0, j = 0;
   while(i<<vec1.size()&&j<vec2.size())
   {
     if(vec1[i] == vec2[j])
     {
       vec.push_back(vec1[i]);
       i++; j++;
     }
     else if(vec1[i] < vec2[j])
        i++;
     else
        j++;
   }
   for(int i = 0; i<vec.size(); i++)
   {
    cout<<vec[i]<<" ";
   }
   


}

   