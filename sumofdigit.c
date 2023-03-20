#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n=12345;
    int temp,sum=0,remainder;
    //scanf("%d", &n);
    temp = n;

   while (temp != 0)
   {
      remainder = temp % 10;
      sum       = sum + remainder;
      temp        = temp / 10;
   }

   printf("%d",sum);
    return 0;
}