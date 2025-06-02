#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> vec={1,2,3};
vector<int>vec2(5,0);
cout<<vec2.size()<<" ";
vec2.push_back(88);
cout<<vec2.size()<<" ";
// similarly : pop_back()
// similarly : front()
// similarly : back()
// similarly : at()
for(int it:vec2) //foreach loop
{
    cout<<it<<" ";
}

return 0;

}
