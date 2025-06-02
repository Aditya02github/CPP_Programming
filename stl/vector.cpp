# include<bits/stdc++.h>
 using namespace std ;
 int main()
 {
  vector<int> v;
  v.push_back(3);
  v.push_back(9);
 cout<<v[0]<<" "<<v[1];
  cout<<endl;

  vector<pair<int,int>> vect;
  vect.push_back({2,3});
  cout<<vect[0].first<<" "<<vect[0].second;
  cout<<endl;

  vector<int> w(5,100); //size=5, value of all is 100
  for(auto it:w)
  {
    cout<<it<<" ";
  }
  
  cout<<endl;
   //printing
  vector<int> u(5); //size=5 and all are initialize with 0
 for(auto iterator:u)
  {
    cout<<iterator <<" ";
  }

   cout<<endl;
   vector<int> v2(u);
   for(auto iterator:v2)
  {
    cout<<iterator <<" ";
  }
  
  //printing
 for(auto it=v.begin();it!=v.end();it++)
 {
    cout<<*(it)<<" ";
//   }
cout<<endl;
vector <int> v4={5,7,3,2,1};
v4.erase(v.begin()) ; //only eraseor delete 5 only
//v4{7,3,2,1}
v4.erase(v.begin()+1,v.begin()+3); //(start,end) i.e. start included and end excluded  
//v4{7,1}

vector <int> v5={5,7,3,2,1,9};
v5.size();//6
v5.pop_back();//{5,7,3,2,1}
//Insert function
vector <int> v7={9,5};
v7.insert(v7.begin(),100);//{100,9,5}
v7.insert(v7.begin()+1,2,50);//{100,50,50,9,5}
v7.clear(); //erase the entire vector
//swap
vector <int> v8={5,7};
vector <int> v9={1,9};
v9.swap(v8);
cout<<v9.empty();

    return 0;
  }
