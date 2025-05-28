#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
   char word[46];

   cin >> word;
   
   cout << word << " starts with the letter: " << word[0] <<endl;
   
   //second way (with pointers)
   
   char *wordA = new char[46]; 

   cout << "choose a word: " <<endl;
   cin >> wordA;

   cout << wordA << " starts with the letter: " << wordA[0] <<endl;

   return 0;
}