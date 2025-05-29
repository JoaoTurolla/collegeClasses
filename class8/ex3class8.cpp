#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int a, size = 0, *v = NULL;

   v = (int*) malloc(sizeof(int));

   if(v == NULL){ 
      cout << "Memory allocation error" <<endl;
      return 1;
   }
   
   while(a != -1){
      cin >> a;
      if(a != -1){
         size++;
         v = (int*) realloc(v, size * sizeof(int));
         v[size - 1] = a;
      }

   }

   for(int j = 0; j < size; j++) cout << v[j] <<endl;

   free(v);
   cin >> a;
   return 0;
}