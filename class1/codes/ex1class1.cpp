#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
// Fui buscar aprender este estilo de codigo em c++, achei mais pratico, bonito e legal, entao vou estar utilizando-o;
int main(){
   int a, b, c;

   cout << "I can only add numbers, let me help you." <<endl;
   cout << "What numbers do you want to add?" <<endl;

   cin >> a;

   cout << "Now the second number." <<endl;

   cin >> b;

   c = a + b;

   cout << "The sum of "<< a << " and " << b << " is: " << c <<endl;

   cin >> a; //This is just so the screen doesn't close as the last print is done, I will use it until I have, or am taught, a better solution for that.
   return(0);
}