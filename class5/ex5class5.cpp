#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int imcCalc(float Kg, float height){

   float imc = Kg / (height * height);

   if( imc < 18.5f) return 0;
   if( imc < 25.0f) return 1;
   if( imc < 30.0f) return 2;
   return 3;
}

void imcClassif(float Kg,float height){

   int imc = imcCalc(Kg, height);
   
   if( imc == 0) cout << "Underweight";
   else if( imc == 1) cout << "Healthy";
   else if( imc == 2) cout << "Overweight";
   else if (imc == 3) cout << "Obese";

}

int main(){

   imcClassif(54.5f, 1.7f);
   
}