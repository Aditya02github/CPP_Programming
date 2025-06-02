#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   int sum=0;
   int count=0;
    
    
   while(getline(cin, s)){
        string curr= s;

        int space=0;
        int pointer=0;

        while(space<3){
            
            if(curr[pointer]==' '){
                space+=1;
                pointer+=1;
            }else{
                pointer+=1;
            }
        }

        string number="";
        while(pointer< curr.length()){
            number+=s[pointer];
            pointer+=1;
        }

        int currnum=stoi(number);
        sum+= currnum;
        count+=1;
   }

    double a= (double)(sum);
    cout<<sum<<" ";
    
    cout<<fixed<<setprecision(5)<<a/count;
    return 0;
}