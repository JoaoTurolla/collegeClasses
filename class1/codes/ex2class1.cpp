#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a, b;

   cout << "I can only add numbers, let me help you." <<endl;
   cout << "What numbers do you want to add?" <<endl;

   cin >> a;

   cout << "Now the second number." <<endl;

   cin >> b;

   cout << "The sum of "<< a << " and " << b << " is: " <<endl;

   a +=b;

   cout << "" << a <<endl;

   cin >> a; //Essa e a minha versao do scanf no fim do código. Sim, foi ctrl + c, ctrl + v. Era só diminuir em 1 variavel.
   return(0);
}