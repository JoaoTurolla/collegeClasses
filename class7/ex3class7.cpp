#include <iostream>
#include <stdlib.h>

using namespace std;

int verify(char n, char *m, int size){
   for(int i = 0; i < size; i++){
      if((m[i] == n) || (m[i] == n + 32)){
         cout << "1";
         return 1;
      } 
   }
   cout << "0";
   return 0;
}

int main(){
   char one, *two = new char[46];
   int three;

   cin >> one;
   cin >> two;
   cin >> three;

   verify(one, two, three);

   return 0;
}
