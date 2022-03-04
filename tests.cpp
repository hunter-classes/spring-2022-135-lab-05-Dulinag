#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"



TEST_CASE("n is divisble by d when they equal each other:"){

  CHECK(isDivisibleBy(4,4) == true);
}

TEST_CASE("n is not  divisble by d when d is not a factor of n:"){

  CHECK(isDivisibleBy(4,7) == false);
  CHECK(isDivisibleBy(4,5) == false);
  CHECK(isDivisibleBy(4,3) == false);

}

TEST_CASE("n is divisble by d when d is a factor of n:"){

  CHECK(isDivisibleBy(4,2) == true);
  CHECK(isDivisibleBy(8,2) == true);
  CHECK(isDivisibleBy(12,4) == true);
}

TEST_CASE("n is a negative number:"){

  CHECK(isDivisibleBy(-4,4) == true);
  CHECK(isDivisibleBy(-4,2) == true);
  CHECK(isDivisibleBy(-8,1) == true);
}


TEST_CASE("n cannot be 0:"){

  CHECK(isPrime(0) == false);
}

TEST_CASE("n cannot be 1:"){

  CHECK(isPrime(1) == false);
}

TEST_CASE("n cannot be less than 0:"){

  CHECK(isPrime(-1) == false);
}

TEST_CASE("n has be divisible by itsef only:"){

  CHECK(isPrime(11) == true);
  CHECK(isPrime(17) == true);
  CHECK(isPrime(19) == true);
  CHECK(isPrime(23) == true);
}

TEST_CASE("n has to be divisible only by itself:"){

    CHECK(isPrime(3) == true);
    CHECK(isPrime(5) == true);
    CHECK(isPrime(7) == true);
    CHECK(isPrime(11) == true);

  }

TEST_CASE("n could be negative number"){

    CHECK(nextPrime(-1) == true);
    CHECK(nextPrime(-2) == true);

  }

TEST_CASE("b has to be positive"){

    CHECK(countPrimes(-4,-1) == false);
    CHECK(countPrimes(-2,-1) == false);

  }


  TEST_CASE("n has to be divisible only by itself and be two less or more than the other prime number:"){

      CHECK(isTwinPrime(17) == true);
      CHECK(isTwinPrime(71) == true);

                    }

TEST_CASE("n could be a negative number:"){

    CHECK(nextTwinPrime(-1) == true);
    CHECK(nextTwinPrime(-2) == true);

      }



TEST_CASE("a and b have no Twin primes in between the interval:"){

    CHECK(largestTwinPrime(14, 16) == false);
    CHECK(largestTwinPrime(74, 78) == false);

    }

TEST_CASE("a and b have twin primes in between the interval:"){

      CHECK(largestTwinPrime(3,19) == true);
      CHECK(largestTwinPrime(40,60) == true);

        }
