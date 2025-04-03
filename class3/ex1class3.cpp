#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
   long double a, b = 1;

   cout << "Tell me what factorial you want to know." <<endl;
   cin >> a;

   while(a != 0){
      b *= a;
      a--;
   }

   cout <<""<< b <<endl; 
   cin >> a;
   return(0);
}