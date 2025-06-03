#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a, b;

   cout << "What do you want 'a' to be?" <<endl;
   cin >> a;

   cout << "What do you want 'b' to be?" <<endl;
   cin >> b;

   std::swap(a, b);

   cout << "This is 'a': " << a <<endl << "This is 'b': " << b <<endl;

   cin >> a;
   return(0);
}