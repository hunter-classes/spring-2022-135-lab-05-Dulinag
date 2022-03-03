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
     cout<< true <<endl;

}

void nextPrime(int n){

int i;

while (i > n)
   {
       if (n % i == 0 && i != n)
       cout<<"false"<<endl;
       i = i + 2;
   }
   cout<< i <<endl;













}

void countPrimes(int a, int b){

   int p, i;
   while (a <= b) {
      p = 0;
      for(i = 2; i <= a/2; i++) {
         if(a % i == 0) {
            p = 1;
            break;
         }
      }
      if (p == 0)
      cout<<a<<" ";
      a++;
   }
}

void isTwinPrime(int n){

  for (int i = 3; i < n; i++)
     {

        if (n % (i+2) == 0 && i != n)

              cout<<"false"<<endl;

     }
     cout<<"true"<<endl;




}


//void nextTwinPrime(int n){






//}

void largestTwinPrime(int a, int b){


     int p, i;
     while (a <= b) {
        p = 0;
        for(i = 2; i <= a/2; i++) {
           if(a % i == 0) {
              p = 1;
              break;
           }
        }
        if (p == 0)
        cout<<a<<" ";
        a++;
     }






}
