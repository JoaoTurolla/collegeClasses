#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
   float a, b, c;

   //Um triangulo so e retangulo se c² = a² + b²; E como em um triangulo retangulo 
   //o maior lado tem de ser a hipotenusa, se o usuario ler, da pra resolver sempre.
   cout << "What's the length of the sides of your triangle?(broken numbers are accepted)" <<endl;
   cout << "First side (one of the smaller sides): "<<endl;
   cin >> a;

   cout << "Second side (the other from the smaller sides): " <<endl;
   cin >> b;

   cout << "Third side (greater side): " <<endl;
   cin >> c;
   
   if(pow(c, 2) == pow(a, 2) + pow(b, 2)) {
      cout << "This is a right triangle" <<endl;
   } else {
      cout << "This is not a right triangle" <<endl;
   }

   cin >> a;
   return(0);
}