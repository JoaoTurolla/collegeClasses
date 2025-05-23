#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
   int vectorA[5], vectorB[5];

   cout << "Write 5 numbers for the first array: " <<endl;
   for(int i = 0; i < sizeof(vectorA)/ sizeof(vectorA[0]); i++){
      cin >> vectorA[i];
   }

   cout << "Write 5 numbers for the second array: " <<endl;
   for(int i = 0; i < sizeof(vectorB)/ sizeof(vectorB[0]); i++){
      cin >> vectorB[i];
   }

   cout <<endl;
   for(int i = 0; i < sizeof(vectorA)/ sizeof(vectorA[0]); i++){
      cout << vectorA[i] <<endl;
   }

   cout <<endl;
   for(int i = 0; i < sizeof(vectorB)/sizeof(vectorB[0]); i++){
      cout << vectorB[i] <<endl;
   }

   cout <<endl;
   for(int i2 = 0; i2 < 5; i2++){
      for(int i3 = 0; i3 < 5; i3++){
         
      }
   }
}