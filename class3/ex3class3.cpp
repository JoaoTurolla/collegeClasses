#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
   float a, b, c;

   cout << "Tell me a number" <<endl;
   cin >> a;

   cout << "Now a second number."<<endl;
   cin >> b;

   cout << "Do you want to add them? (number 0)" <<endl << "Do you want to subtract them? (number 1)" <<endl;
   cout << "Do you want to multiply them? (number 2)" <<endl << "Do you want to divide them? (number 3)" <<endl;

   cin >> c;

   if(c == 0){
      c = a + b;
   } else if(c == 1){
      c = a - b;
   } else if(c == 2){
      c = a * b;
   } else if(c == 3){
      c = a / b;
   }
   
   cout << "" << c <<endl;
   
   cin >> a;
   return(0);
}