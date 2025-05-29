#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

   char *a;
   int amount, size, oneChar, *v, a;
   oneChar = sizeof(char);

   cout << "How many ints do you want?" <<endl;
   cin >> amount;

   size = amount * sizeof(int);

   a = (char*) malloc(amount * sizeof(char)); // Malloc receives the size in bytes; (char*) is what Malloc returns, type casts are needed to specify it.
   
   v = (int*) calloc(amount, sizeof(int));
   // b = (char*) calloc(size, sizeof(char)); Calloc does not work for char*;

   for(int i = 0; i < amount; i++){
      cout << v[i] <<endl;
   }

   free(a); //Everytime you work with dynamic allocations of memory, remember to use free at the end of your code.
   cin >> a;
   return 0;
}