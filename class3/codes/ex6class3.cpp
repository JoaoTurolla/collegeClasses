#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
   float h, b = 0, c = 0, d = 1;

   cout << "I make right triangles of all sizes. How tall do you want it to be?" <<endl;
   cin >> h;

   while(b < h){
      while(c < d){
         cout << "*";
         c++;
      } 
      if (c == d){
         cout << "" << endl;
         d++;
      }
      b++;
      c = 0;
   }

   cin >> h;
   return(0);
}