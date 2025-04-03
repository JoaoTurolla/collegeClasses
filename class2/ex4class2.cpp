#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
   int a, age, serviceYears;

   cout << "How old are you?" <<endl;
   cin >> age;
   cout << "How many years have you worked?" <<endl;
   cin >> serviceYears;

   if(age >= 65 || serviceYears >= 30){
      cout << "You can retire now." <<endl;
   } else if(age >= 60 && serviceYears >= 25){
      cout << "You too, can retire now." <<endl;
   } else {
      cout << "You can't retire now." <<endl;
   }

   cin >> a;
   return(0);
}