#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("isDivisibleBy"){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(37,17) == false);
    CHECK(isDivisibleBy(0,-3) == true);
    CHECK(isDivisibleBy(0,0) == false);
}

TEST_CASE("isPrime"){
    CHECK(isPrime(0) == false);
    CHECK(isPrime(47) == true);
    CHECK(isPrime(20) == false);
    CHECK(isPrime(17) == true);
}

TEST_CASE("nextPrime"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(23) == 29);
    CHECK(nextPrime(41) == 43);
    CHECK(nextPrime(-1) == 2);
}

TEST_CASE("countPrimes"){
    CHECK(countPrimes(3,5) == 1);
    CHECK(countPrimes(0, 10) == 4);
    CHECK(countPrimes(-20,20) == 8);
    CHECK(countPrimes(27,7) == 6);
    CHECK(countPrimes(-5, -20) == 0);
}

TEST_CASE("isTwinPrime"){
    CHECK(isTwinPrime(3) == 1);
    CHECK(isTwinPrime(15) == 0);
    CHECK(isTwinPrime(41) == 1);
    CHECK(isTwinPrime(-41) == 0);
    CHECK(isTwinPrime(121) == 0);
}

TEST_CASE("nextTwinPrime"){
    CHECK(nextTwinPrime(20) == 23);
    CHECK(nextTwinPrime(-5) == 2);
    CHECK(nextTwinPrime(33-27) == 7);
    CHECK(nextTwinPrime(53/2) == 29);
    CHECK(nextTwinPrime(13%5) == 5);
}

TEST_CASE("largestTwinPrime"){
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
    CHECK(largestTwinPrime(-14,50) == 43);
    CHECK(largestTwinPrime(-40,-3) == -1);
    CHECK(largestTwinPrime(90,-3) == 73);
}