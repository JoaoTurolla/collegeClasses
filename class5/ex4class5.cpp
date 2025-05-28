#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int isPrime(int x){

   if(x <= 1) return 0;

   for(int i = x - 1; i > 1; i--){
      if(x % i == 0) return 0;
   }

   return 1;
}


int main(){

   cout << isPrime(13);
   
   return 0;
}