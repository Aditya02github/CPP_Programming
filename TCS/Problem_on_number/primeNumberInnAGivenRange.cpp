#include <iostream>
#include <cmath>
using namespace std;



bool isPrime(int n) {
    if (n <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }
    if (n == 2) {
        return true;  // 2 is prime
    }
    if (n % 2 == 0) {
        return false;  // Even numbers greater than 2 are not prime
    }

    // Check divisibility from 3 to sqrt(n)
    for (int i = 3; i <=sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;  // n is divisible by i
        }
    }
    return true;  // n is prime
}

void PrintPrimesbwrange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int a = 1, b = 100;
    PrintPrimesbwrange(a, b);
    return 0;
}