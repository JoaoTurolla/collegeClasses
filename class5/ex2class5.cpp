#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float a = 2.0f, b = 3.0f, c = -15.0f;

float sqFunc(float x){
   return a * x * x + b * x + c; 
}

int main(){
   int a;
   
   cout << sqFunc(5.0f);

   cin >> a;
   return 0;
}