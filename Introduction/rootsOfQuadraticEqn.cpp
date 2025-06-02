#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;

int d;
d=b*b-4*a*c;
if(d>0)
{ cout<<"Two distinct roots\n";
   
    cout<<  (-(double)b+sqrt(d))/2*a<<endl;
    cout<<  (-(double)b-sqrt(d))/2*a;

}
else if(d==0)
{
    cout<<"Two equal roots\n";
    cout<< -(double)b/(2*a)<<endl;
     cout<< -(double)b/(2*a);

}
else{
     cout<<"No real roots\n";
   
    cout << -(double)b / (2 * a) << " + i" << sqrt((-1)*d)/(2*a) << endl
            << "\n"
            << -(double)b / (2 * a) << " - i" << sqrt((-1)*d)/(2*a);

}
    return 0;
}
