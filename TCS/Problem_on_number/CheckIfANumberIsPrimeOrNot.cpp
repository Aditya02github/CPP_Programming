#include <bits/stdc++.h> 

using namespace std;
bool CheckPrime(int n){ 

    int cnt = 0;
     for(int i = 1; i <= sqrt(n); i++)
     { 
 
        
         if(n % i == 0){ 
 
            
             cnt = cnt + 1;
 
         
             if(n / i != i){
                 cnt = cnt + 1;
             }
         }
     }
 
    if(cnt == 2)
     {
       return true;
     }
 
     else
     { 
       return false; 
     }
 }





int main() {
    int n = 7;
  
    if( CheckPrime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
                                
      