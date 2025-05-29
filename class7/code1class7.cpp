#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
   int a;
   int vector[5];

   vector[0] = 1;
   vector[1] = 2;
   vector[2] = 3;
   vector[3] = 4;
   vector[4] = 5;

   // sizeof returns the size in bytes, so in order to get the real size of the array
   // you need to divide it by the sizeof of the first element of the array;

   for(int i = 0; i < (sizeof(vector)/sizeof(vector[0])); i++){
      cout << vector[i] <<endl;
   }

   cin >> a;
   return 0;
}