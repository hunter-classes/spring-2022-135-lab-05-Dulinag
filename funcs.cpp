#include <iostream>
#include "funcs.h"
using namespace std;

void isDivisibleBy(int n, int d){


  if (n % d == 0){

    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;

  }



}



void isPrime(int n){

  for (int i = 2; i < n; i++)
     {
         if (n % i == 0 && i != n)
         cout<<"false"<<endl;

     }
     cout<<"true"<<endl;

}

//void nextPrime(int n){

void countPrimes(int a, int b){

   int flag, i;
   while (a <= b) {
      flag = 0;
      for(i = 2; i <= a/2; i++) {
         if(a % i == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
      cout<<a<<" ";
      a++;
   }
}
