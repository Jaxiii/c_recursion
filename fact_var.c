#include <stdio.h>

int fatorial(int x) {

   if(x <= 1) {
      return 1;
   }
   return x * fatorial(x- 1);
}

int  main() {
   int y = 5;
   printf("%d\n", fatorial(y));
   return 0;
}