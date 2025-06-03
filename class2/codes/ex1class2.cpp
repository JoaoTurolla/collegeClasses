#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a;

   cout << "What number made you question your sanity?" <<endl; 

   cin >> a;

   if(a > 0){
      cout << a << " is a positive integer." <<endl;
   } else if(a < 0){
      cout << a << " is a negative integer." <<endl;
   } else {
      cout << a << " is a neutral integer." <<endl;
   }


   cin >> a;
   return(0);
}