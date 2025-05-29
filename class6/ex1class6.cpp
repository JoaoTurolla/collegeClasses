#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
   int a;

   srand(time(NULL));
   cout << ((rand() % 11) + 2) <<endl;

   cin >> a;
   return 0;
}