#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a;

   cout << "What number made you question your sanity?" <<endl;
   cin >> a;

   if(a % 2){
      cout << "This is an odd number." <<endl;
   } else {
      cout << "This is an even number." <<endl;
   }

   cin >> a;
   return(0);
}