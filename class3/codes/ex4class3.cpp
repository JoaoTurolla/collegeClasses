#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
   float c, a = 0, b = 0, d = 1;

   cout << "What term of the fibonacci sequence do you wanna know?" <<endl;
   cin >> c;

   for(int n = 0; n < c; n++){
      a = b + d;
      if(n > 0){
         b = d;
         d = a;
      }
   }

   cout << "The number "<< c << " term of the fibonacci sequence is: " << a <<endl;
   
   cin >> a;
   return(0);
}