#include <iostream>
#include <stdlib.h>

using namespace std;

void doubling(int *n){
 *n = *n * 2;
}

//When using pointers, remember to always pass the parameter as its address: '&a' for example

int main(){
   int vector[5] = {1, 2, 3, 4, 5};

   for(int i = 0; i < sizeof(vector)/sizeof(vector[0]); i++){
      doubling(&vector[i]);
   }

   for(int i = 0; i < sizeof(vector)/sizeof(vector[0]); i++){
      cout << vector[i] <<endl;
   }

   return 0;
}