#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
//2 pi r; pi r²;
void circCalc(float *area, float *perimeter, float radius){
   *area = radius * radius * M_PI;
   *perimeter = 2 * radius * M_PI;

}

int main(){
   float r, a, p;
   
   cin >> r;

   circCalc(&a, &p, r);

   cout << a << p << r;

   return 0;
}