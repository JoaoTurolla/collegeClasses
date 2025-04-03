#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
   float c, a = 0, b = 0, d = 1;

   cout << "Until what number of the fibonacci sequence you wanna know?" <<endl;
   cin >> c;

   for(int n = 0; a < c; n++){
      a = b + d;
      if(a < c){
         cout << "" << a <<endl;
      } else if(a == c){
         cout << "" << a <<endl;
         return(0);
      } else {
         return(0);
      }
      if(n > 0){
         b = d;
         d = a;
      }
   }
   
   cin >> a;
   return(0);
}