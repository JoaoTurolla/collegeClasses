#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   float a, b, c;

   cout << "Tell me what numbers you want to add, multiply, divide and subtract. One by one." <<endl;
   cin >> a;

   cout << "Now the second number."<<endl;
   cin >> b;

   c = a + b;

   cout << "This sum is equal to: " << c <<endl;

   c = a - b;

   cout << "This subtraction is equal to: " << c <<endl;

   c = a * b;

   cout << "This multiplication is equal to: " << c <<endl;

   c = a / b;

   cout << "This division is equal to: " << c <<endl;
 
   cin >> a;
   return(0);
}