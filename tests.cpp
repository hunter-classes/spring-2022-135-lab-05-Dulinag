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
