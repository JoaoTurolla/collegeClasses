#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a;

   cout << "What number 'a' made you question your sanity?" <<endl; 

   cin >> a;

   if(a > 0){
      cout << a << " is the absolute value of 'a'." <<endl;
   } else if(a < 0){
      a *=-1;
      cout << a << " is the absolute value of 'a'." <<endl;
   } else {
      cout << " The absolute value of 0 is 0.Haha funny." <<endl;
   }


   cin >> a;
   return(0);
}