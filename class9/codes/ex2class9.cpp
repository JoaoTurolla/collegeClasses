#include <iostream>
#include <stdlib.h>

using namespace std;

int** createSqrMatrix(int** c, int size){
   c = NULL;
   c = (int**) malloc(size * sizeof(int*));
   if(c == NULL) return NULL;

   for(int i = 0; i < size; i++){
      c[i] = NULL;
      c[i] = (int*) malloc(size * sizeof(int));
      if(c[i] == NULL) return NULL;
   }

   return c;
}

void printMatrix(int** g, int size){
   for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
         cout << g[i][j] << " ";
      }
   }
}

int** transposedMatrix(int** c, int size){
   int n = 1;
   for(int i = 0; i < size; i++){
      for(int j = 0; j < n; j++){
        swap(c[i][j], c[j][i]);
      }   
      n++;
   }

   return c;
}

int** fillMatrix(int** c, int size){
   int add = 0;
   
   for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
         c[i][j] = add;
         add++;
      }
   }   

   return c;
}


int main() {
   int a, **b = NULL, sizeB;

   cin >> sizeB;

   b = createSqrMatrix(b, sizeB); //remember to assign the return to something...
   
   fillMatrix(b, sizeB);

   b = transposedMatrix(b, sizeB); //again... remember to assign the return to something...

   printMatrix(b, sizeB);


   for(int i = 0; i < sizeB; i++)free(b[i]);
   free(b);
   cin >> a;
   return 0;
}

// Well, the problem mentioned a 3x3 matrix, but I wanted to make it universal, I can now tranpose any size of square matrices;
// Though I cannot personalize the matrix, for i would need to change "c[i][j] = add" to "cin >> c[i][j]";