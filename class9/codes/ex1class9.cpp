#include <iostream>
#include <stdlib.h>

using namespace std;

int** matrixSum(int b[3][3], int c[3][3]){
   int** f = NULL, **endFuncPtr;

   f = (int**) malloc(3 * sizeof(int*));

   if(f == NULL) return endFuncPtr;

   for(int i = 0; i < 3; i++){
      f[i] = NULL;
      f[i] = (int*) malloc(3 * sizeof(int));
      if(f[i] == NULL) return endFuncPtr;
   }

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         f[i][j] = b[i][j] + c[i][j];
      }
   }
   return f;
} 

void printMatrix(int** g){
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         cout << g[i][j] << " ";
      }
   }
}

int main() {
   int a, **result;

   int d[3][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   int e[3][3] ={{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

   result = matrixSum(d, e);
   printMatrix(result);


   for(int i = 0; i < 3; i++){
      free(result[i]);
   }
   free(result);
   cin >> a;
   return 0;
}