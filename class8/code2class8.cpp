#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int *v = NULL /* For good practice */, amount, a;

   cout << "How many ints do you want?" <<endl;
   cin >> amount;

   v = (int*) calloc(amount, sizeof(int));

   if(v == NULL){
      cout << "Error on memory allocation" <<endl;
      return 1;
   };

   v = (int*) realloc(v, amount + 10);

   free(v);
   cin >> a;
   return 0;
}