#include <stdio.h>

int main (void) {
   int i , j;
   int *p , *q;
   //p = i;
   q = &j;
   p = &*&i;
   //i = (*&)j ;
   i = *&j;
   i = *&*&j;
   //q = *p;
   i = (*p)++ + *q;

   return 0;
}
