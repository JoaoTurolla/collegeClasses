#include <iostream>
#include <stdlib.h>

using namespace std;

int getRealSize(char *k){
   int counter = 0;

   for(int i = 0; i < sizeof(k)/sizeof(k[0]); i++){
      if(k[i] != '\0'){
         counter++;
      } else return counter;
   }
   return counter;
} 

void printer(char *a, char *b, int size){
   for(int i = 0; i < 2; i++){
      if(i == 0){
         cout <<endl;
         for(int n = 0; n < size; n++){
            cout << a[n] <<endl;
         }
      } else {
         cout <<endl;
         for(int n = 0; n < size; n++){
            cout << b[n] <<endl;
         }
      }
   }
}

int main(){
   char *wordA = new char[46], *wordB = new char[46]; int m, one, two;

   cin >> wordA;
   cin >> wordB;
   cin >> m;
   
   one = getRealSize(wordA);
   two = getRealSize(wordB);

   if( one != two){
      cout << "It wont work" <<endl;
      return 0;
   } 

   printer(wordA, wordB, m);
}