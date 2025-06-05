#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int a, i = 1, j = 1, *ptr;
   int b[6] = {1, 2, 3, 4, 5, 6};    //Array
   int c[2][3] = {{1, 2, 3}, {4, 5, 6}}; //Matrix or just an Array of Arrays...

   cout << b[i * 3 + j] <<endl; //Multiply the index of the line y the number of columns the matrix has and add the column it is located
   cout << c[i][j] <<endl;

   ptr = b;
   //To print every element 

   for(int k = 0;k < 6; k++){
      cout << b[k] << " ";
   } cout <<endl;

   for(int m = 0; m < 2; m++){
      for(int n = 0; n < 3; n++){
         cout << c[m][n] << " ";
      } cout <<endl;
   } 

   for(int k = 0; k < 6; k++){
      cout << *ptr << " ";
      ptr++; // Dislocating the pointer

      // ou:
      // cout << *ptr + k << " "; 
   } cout <<endl;

   cin >> a;
   return 0;
}