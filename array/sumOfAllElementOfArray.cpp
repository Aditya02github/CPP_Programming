#include <iostream>

using namespace std;

bool isPerfect(int n) {

  int sum = 0;
  for (int i = 1; i <= n - 1; i++) {
    if (n % i == 0)
      sum = sum + i;
  }
  if (sum == n)
    return true;
  return false;
}

int main() {
  // your code goes here
  bool ex1 = isPerfect(6);
  

  if (ex1) {
    cout << "6 is a perfect number" << endl;
  } else cout << "6 is not a perfect number" << endl;

  

  return 0;
}

