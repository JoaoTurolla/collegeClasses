#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//Use of pointers.
void doubleNum(int *a){
   *a *= 2;
}

int main(){
   int x = 2;
   
   for(int i = 0; i < 10; i++){
      cout << x <<endl;
      doubleNum(&x); //When using pointers, you MUST set it to the address of given x like this example:(&x);
   }


   return 0;
}