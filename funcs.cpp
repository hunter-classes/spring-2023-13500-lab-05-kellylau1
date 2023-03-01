#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d); 
bool isPrime (int n); 
int nextPrime(int n); 
int countPrimes(int a, int b); 
bool isTwinPrime(int n); 

bool isDivisibleBy(int n, int d) {
    bool divisible = true; 
    if (n % d != 0) {
        divisible = false; 
    }
return divisible; 
}

bool isPrime (int n) {
    int is_divisible = 0; 
    bool prime = true; 
    for (int i = 1; i < 10000; i++) {
        if (n%i == 0) {
            is_divisible++; 
        }
    }
    if (is_divisible > 2) {
        prime = false; 
    } 
return prime; 
}

int nextPrime(int n) {
    n = n + 1;
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

int countPrimes(int a, int b) {
    int counter = 0; 
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            counter++;
        }
    }
return counter; 
}

bool isTwinPrime(int n) {
    bool isTwin = false; 
    if((isPrime(n-2) || isPrime(n+2)) && isPrime(n)) {
        return isTwin = true; 
    }
return isTwin; 
}

int nextTwinPrime(int n) {
    while(!isTwinPrime(++n)); 
    return n; 
}

int largestTwinPrime(int a, int b) {
    for (b; b >= a; b--) {
        if(isTwinPrime(b)) {
            return b; 
        }
    }
return -1; 
}



int main() {
    // if (isDivisibleBy(100, 25)) {
    //     std::cout << "True" << " \n"; 
    // } else {
    //     std::cout << "False" << " \n"; 
    // }
    // if (isDivisibleBy(35, 17)) {
    //     std::cout << "True" << " \n"; 
    // } else {
    //     std::cout << "False" << " \n"; 
    // }

    // std::cout << isPrime(37) << '\n'; 
    // std::cout << isPrime(14) << '\n'; 
    
    // std::cout << nextPrime(14) << '\n'; 

    // std::cout << countPrimes(100,1000) << '\n';

    // std::cout << isTwinPrime(17) << '\n';
    // std::cout << nextTwinPrime(7) << '\n';
    std::cout << largestTwinPrime(20,28) << '\n';
return 0; 
}