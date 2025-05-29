#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


float line(float x){
   float a, b;
   return a * x + b;
}
// Functions are defined before the main code.

int main(){
   float answer; int a;

   for(int i = 0; i < 1000; i++){
      answer = line(14.0f);
      cout << answer <<endl;
   }

   auto num = [](int a){
      return a * 9;
   };
   // Lambda function syntax basically a function inside main. If you ever need them.

   cout << num(4) <<endl;

   cin >> a;
   return 0;
}
