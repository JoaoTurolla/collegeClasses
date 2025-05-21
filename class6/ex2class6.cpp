#include <iostream>
#include <stdlib.h>

using namespace std;

int total = 0;

int sumTillNum(int n){
   if(n < 0){ 
      cout << "We don't accept negative numbers." <<endl;
      return 0;
   } else if(n == 0) return total;
   
   total += n;
   return sumTillNum(n - 1); 
}

int main() {
   sumTillNum(100);
   cout << total <<endl;
}