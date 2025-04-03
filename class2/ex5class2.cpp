#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a, b, c, temp;

   cout << "What numbers do you want me to put in crescent order?" <<endl;
   
   cout << "First" <<endl;
   cin >> a;

   cout << "Second" <<endl;
   cin >> b;

   cout << "Third" <<endl;
   cin >> c;

   if(a > b){
      swap(a, b);
   } 
   if(a > c){
      swap(a, c);
   }
   if(b > c){
      swap(b, c);
   }

   cout << a << "; "<< b << "; " << c <<endl;

   cin >> a;
   return(0);
}