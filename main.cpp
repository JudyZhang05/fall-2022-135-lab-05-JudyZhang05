#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "\nLab 5. Functions and Prime Numbers\n\nTask A. Is divisible?\n\n";
  std::cout << isDivisibleBy(101, 25) << std::endl;

  std::cout << "\nTask B. Is a prime?\n\n";
  std::cout << isPrime(5) << std::endl;
  
  std::cout << "\nTask C. Next prime\n\n";
  std::cout << nextPrime(14) << std::endl;

  std::cout << "\nTask D. Count primes in range\n\n";
  std::cout << countPrimes(3, 20) << std::endl;

  std::cout << "\nTask E. Is a twin prime?\n\n";
  std::cout << isTwinPrime(11) << std::endl;
  
  std::cout << "\nTask F. Next twin prime\n\n";
  std::cout << nextTwinPrime(45) << std::endl;
  
  std::cout << "\nTask G. Largest twin prime in range\n\n";
  std::cout << largestTwinPrime(5, 18) << "\n\n";

  return 0;
}
