// The #ifdef, #ifndef, and #undef Directives
#include <stdio.h>

#define RATE 0.08
#ifndef TERM
  #define TERM 24
#endif

int main() {
  #ifdef RATE  /* this branch will be compiled */
    #undef RATE  
    printf("Redefining RATE\n");
    #define RATE 0.068
  #else  /* this branch will not be compiled */
    #define RATE 0.068
  #endif

  printf("%f  %d\n", RATE, TERM);

  return 0;
}

