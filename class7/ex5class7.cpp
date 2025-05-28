#include <iostream>
#include <stdlib.h>

using namespace std;


int getRealSize(char *k){
   int i = 0;

   while(k[i] != '\0'){        
      i++;
   } return i;
}

void elInversor(char *a){
   char *b, *c, d; int j = getRealSize(a) - 1;
   c = a; b = a;

   for(int i = 0; i < j; i++){
      c++;
   }
   for(int i = 0; i < j/2 + 1; i++){
      
      d = *b;
      *b = *c;
      *c = d;
      
      c--;
      b++;
      cout << b <<endl;
   }

   cout << a;
}

int main(){
   char *word = new char[46];

   cin >> word;

   elInversor(word);
}