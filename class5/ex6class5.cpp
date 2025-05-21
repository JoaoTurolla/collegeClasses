#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

int isPalindrome(int num){
   int newNum = 0, digit = 0, counter = 1;
   
   while(num / counter >= 1){
      
      digit = num % (10 * counter);
      
      if(counter != 1) digit -= num % (10 * (counter / 10));

      newNum = digit + (newNum * 100);
      cout << newNum <<endl;
      counter *= 10;
   }
   newNum /= (counter / 10);
   cout <<endl << newNum <<endl;
   if(num == newNum) return 1; else return 0;
}

int main(){
   int numToCheck, ans;

   cin >> numToCheck;

   ans = isPalindrome(numToCheck);
  
   if(ans == 1) cout << "It is a palindrome"; else cout << "It is not a palindrome";
}