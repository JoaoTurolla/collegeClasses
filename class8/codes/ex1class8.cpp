#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   int a, n, *v = NULL;


   cout << "Give me a number: " <<endl;
   cin >> n;

   v = (int*) malloc(n * sizeof(int));

   if(v == NULL) return 1;
   
   for(int i = 0; i < n; i++) v[i] = i;

   for(int j = 0; j < n; j++) cout << v[j] <<endl;

   free(v);
   cin >> a;
   return 0;
}