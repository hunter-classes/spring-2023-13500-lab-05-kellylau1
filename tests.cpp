#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy") {
  CHECK(isDivisibleBy(100,25) == true);
  CHECK(isDivisibleBy(500,20) == true);
  CHECK(isDivisibleBy(35,17) == false);
  CHECK(isDivisibleBy(2,3) == false);
}

TEST_CASE("isPrime") {
  CHECK(isPrime(37) == true);
  CHECK(isPrime(17) == true);
  CHECK(isPrime(14) == false);
  CHECK(isPrime(15) == false);
}

TEST_CASE("nextPrime") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(38) == 41);
  CHECK(nextPrime(91) == 97);
}

TEST_CASE("countPrimes") {
  CHECK(countPrimes(2,17) == 7);
  CHECK(countPrimes(5,10) == 2); 
  CHECK(countPrimes(9,100) == 21); 
  CHECK(countPrimes(100,1000) == 143); 
}

TEST_CASE("isTwinPrime") {
  CHECK(isTwinPrime(13) == true);
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(10) == false);
  CHECK(isTwinPrime(28) == false);
}

TEST_CASE("nextTwinPrime") {
  CHECK(nextTwinPrime(17) == 19);
  CHECK(isTwinPrime(29) == 31);
  CHECK(isTwinPrime(3) == 5);
  CHECK(isTwinPrime(7) == 11);
}

TEST_CASE("largestTwinPrime") {
  CHECK(largestTwinPrime(5,18) == 17);
  CHECK(largestTwinPrime(1,31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
  CHECK(largestTwinPrime(20,28) == -1);
}
