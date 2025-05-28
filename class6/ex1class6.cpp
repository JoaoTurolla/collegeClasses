#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
   srand(time(NULL));
   cout << ((rand() % 11) + 2) <<endl;

   return 0;
}