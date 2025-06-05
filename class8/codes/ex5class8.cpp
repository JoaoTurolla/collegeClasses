#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int a, n = 0, *v = NULL;

   v = (int*) calloc(9, sizeof(int));

   if(v == NULL) return 1;
   
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         cout << v[(i * 3) + j] << " ";
      }
      cout <<endl;
   }

   free(v);
   cin >> a;
   return 0;
}