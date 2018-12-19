// A demo to understand how to allocate memory chunk

#include <stdio.h>

int main () {

   int*  var1[5]; //allocate a memory chunk for 5 integers, named var1
   char* var2[10]; //allocate a memory chunk for 10 chars, names var2

   printf("Address of var1 variable: %p\n", &var1  );
   printf("Address of var2 variable: %p\n", &var2  );

   return 0;
}