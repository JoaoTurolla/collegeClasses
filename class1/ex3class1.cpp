#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   float a, b;

   cout << "Tell me what broken numbers you want to add. One by one." <<endl;
   cin >> a;

   cout << "Now the second number."<<endl;
   cin >> b;

   a += b;

   cout << "This sum is equal to: " << a <<endl;
 
   cin >> a;
   return(0);
}