#include <iostream>
#include <stdlib.h>

using namespace std;

int digitTotal = 0, tenth = 1; 

int numDigits(int n){
   if(n < 0) return 0;
   //Apenas para números positivos.
   
   if(n < 10){
      digitTotal++;
      return digitTotal;
   } else if(n % (10 * tenth) != n){
      digitTotal++; tenth *= 10;
      return numDigits(n);
   } else if(n % (10 * tenth) == n) {
      digitTotal++; return digitTotal;
   }

   //Vai quebrar se alcançar o limite de uma int
}

int main() {
   int a;
   
   numDigits(100);
   cout << digitTotal <<endl;

   cin >> a;
   return 0;
}