#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

// _USE_MATH_DEFINES e a biblioteca <math.h> foram utilizados para definir o valor de pi para utilizar nas multiplicacoes;

using namespace std;

int main(){
   float r, a;

   cout << "Tell me the radius of the circle you want to know the area." <<endl;
   cin >> r;

   a = M_PI * r * r;

   cout << "The area of this circle is: " << a <<endl;
 
   cin >> a;
   return(0);
}