#include <iostream>
#include <stdlib.h>

using namespace std;

int* evenVector(int *v, int n){
   int* s = NULL, j = 0, *endFuncPtr;

   s = (int*) calloc(n, sizeof(int));

   if(s == NULL) return endFuncPtr;

   for(int i = 0; i < n; i++){
      if(v[i] % 2 == 0){
         s[j] = v[i];
         j++;
      }
   }

   s = (int*) realloc(s, j * sizeof(int));
   return s;
}

int main() {
   int a, *v = NULL, *v2, size;

   cout << "How big is your vector?" <<endl;
   cin >> size;

   v = (int*) calloc(size, sizeof(int));

   if(v == NULL) return 1;

   for(int i = 0; i < size; i++){
      cout << "What's the number of index " << i << " in your vector?" <<endl;
      cin >> v[i];
   }

   v2 = evenVector(v, size);

   free(v); free(v2);
   cin >> a;
   return 0;
}