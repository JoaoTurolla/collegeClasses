#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int a, **matrix = NULL;

   matrix = (int**) malloc(6 * sizeof(int*)); //Allocating memory for a matrix

   if(matrix == NULL) return 1;

   for(int i = 0; i < 6; i++){
      matrix[i] = NULL;
      matrix[i] = (int*) malloc(6 * sizeof(int)); //Setting the elements of matrix to be Arrays;

      if(matrix[i] == NULL) return 1;
   }
   
   for(int i = 0; i < 6; i++) free(matrix[i]);
   free(matrix);
   cin >> a;
   return 0;
}