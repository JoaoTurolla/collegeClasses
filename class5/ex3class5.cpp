#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float cToF(float c){
   return (c * 9.0f / 5.0f) + 32.0f;
}

int main(){

   cout << cToF(30.0f);
}