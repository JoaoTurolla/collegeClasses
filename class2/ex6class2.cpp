#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a, b, c;

   cout << "What's the length of the sides of your triangle?" <<endl;
   cout << "First side: "<<endl;
   cin >> a;

   cout << "Second side: " <<endl;
   cin >> b;

   cout << "Third side: " <<endl;
   cin >> c;

   // Nao gostei de usar tantos if elses, mas nao pensei em mais nada.
   if(a + b > c){
      if(a + c > b){
         if(b + c > a){
            cout << "This is indeed a triangle" <<endl;

            if(a == b && a ==c){
               cout << "This is an equilateral triangle." <<endl;
            } else if((a == b && a != c) || (b == c && b != a)){
               cout << "This is an isosceles triangle." <<endl;
            } else {
               cout << "This is a scalene triangle" <<endl;
            }

         } else {
            cout << "This is not a triangle" <<endl;
         }
      } else {
         cout << "This is not a triangle" <<endl;
      }
   } else {
      cout << "This is not a triangle" <<endl;
   }


   cin >> a;
   return(0);
}