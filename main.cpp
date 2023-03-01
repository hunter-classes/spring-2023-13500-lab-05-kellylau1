#include <iostream>
#include "funcs.h"

int main()
{
    if (isDivisibleBy(100, 25)) {
        std::cout << "True" << " \n"; 
    } else {
        std::cout << "False" << " \n"; 
    }
    if (isDivisibleBy(35, 17)) {
        std::cout << "True" << " \n"; 
    } else {
        std::cout << "False" << " \n"; 
    }

    std::cout << isPrime(37) << '\n'; 
    std::cout << isPrime(14) << '\n'; 
    
    std::cout << nextPrime(14) << '\n'; 

    std::cout << countPrimes(2,17) << '\n';

    std::cout << isTwinPrime(17) << '\n';
    std::cout << nextTwinPrime(17) << '\n';
    std::cout << largestTwinPrime(1,31) << '\n';
  return 0;
}