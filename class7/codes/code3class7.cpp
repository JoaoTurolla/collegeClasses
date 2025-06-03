#include <iostream>
#include <stdlib.h>

using namespace std;

//Purely testing nothing to do with the class itself

int main(){
   int a;
   int vector[5] = {1, 2, 3, 4, 5};
   int *pt = vector; //&vector is not necessary, vector suffices

   cout << pt[4] <<endl; // If you have an index you dont need the '*' before the pointer name, if you don't have any index you need to wirte the '*' before the pointer name
   
   cin >> a;
   return 0;                      
}                        
