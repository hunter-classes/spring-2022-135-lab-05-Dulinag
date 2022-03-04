#include <iostream>
#include "funcs.h"



using namespace std;

bool isDivisibleBy(int n, int d){

  if (d == 0){

    cout << "false"<< endl;

    return false;
  }
  else if (n == 0){

    cout << "false"<< endl;


    return false;
  }

  else if (n % d == 0){

    cout << "true"<< endl;


    return true;
  }
  else{

    cout << "false"<< endl;

    return false;

  }



}



bool isPrime(int n){

  if (n == 0 || n == 1 || n < 0){

    cout << "not prime" << endl;

    return false;
  }
  else if (n = 2){

    cout << "is Prime" << endl;

    return true;
  }


  for (int i = 2; i < n; i++)
     {
         if (n % i == 0 && i != n)

         cout << "not prime" << endl;

         return false;
     }
     cout << "is prime" << endl;
     return true;

}


bool Prime(int n)
{

  if (n <= 1){
    return false;
  }


    for(int i = 2; i < n; i++)
    {
        if ((n%i) == 0)
            return false;

    }
    return true;
  }






int nextPrime(int n){
/* Another way

{
 for(int i = n + 1; i < n * n; i++){

   int b = 0;
  for (int c = 1; c < i; c++){

    if (i % c == 0)
    b++;
  }
  if (b == 2){

    return i;
  }


 }
 return -1;
}
*/

while (!Prime(++n))
{ }
cout << n << endl;
return n;
}

int countPrimes(int a, int b){

  int p = 0;
  for (int i = a; i <= b; i++){

    if (Prime(i) == true){

      p += 1;



    }




  }
    cout << p << endl;
   return p;
}



bool isTwinPrime(int n){

int i, z;

i = n - 2;
z = n + 2;
if ((Prime(n) == true) && ((Prime(i) == true) || (Prime(z) == true))){

  cout << "is Twin Prime" << endl;
  return true;

}

else{
  cout << "not Twin Prime" << endl;
  return false;

}
}


bool Twin(int n){

int i, z;

i = n - 2;
z = n + 2;
if ((Prime(n) == true) && ((Prime(i) == true) || (Prime(z) == true))){


  return true;

}

else{

  return false;

}
}




int nextTwinPrime(int n){

  n += 1;
  while (Twin(n) == false){
    n += 1;
  }
  cout << n << endl;
  return n;

}
/*
  int i = n + 1;
  while(1){
    if (Prime(i) && Prime(i+2)||(Prime(i) && Prime(i-2))){

      return i;
    }
    i++;
  }

}
*/

int largestTwinPrime(int a, int b){

  for (int i = b; i >= a; i--){

    if (Twin(i) == true){
      cout << i << endl;
      return i;
    }
  }
 cout << "no twin primes in interval" << endl;
 return -1;


}
