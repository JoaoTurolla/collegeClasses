#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
   int a;
   
   cout << "What number you think it's a prime number?" <<endl;
   cin >> a;

   for(int i = a - 1; i > 1; i--){
      if(a % i == 0){
         cout <<"This is not a prime number."<<endl;
         return(0);
      }
   }
   cout << "It was indeed a prime number" <<endl;
   
   
   cin >> a;
   return(0);
}