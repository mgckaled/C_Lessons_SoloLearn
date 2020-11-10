
/*
The #ifdef, #ifndef, and #undef Directives

The #ifdef, #ifndef, and #undef directives operate on macros created 
with #define.

For example, there will be compilation problems if the same macro is 
defined twice, so you can check for this with an #ifdef directive. ]
Or if you may want to redefine a macro, you first use #undef.

Because RATE is defined at the top, only the #ifdef clause will be compiled. 
The optional #else branch compiles when #ifdef RATE is false during preprocessing.
An #endif is required to close the block of code.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LEVEL 4

#define RATE 0.08
#ifndef TERM
  #define TERM 24
#endif /* An #endif is required to close the block of code. */

int main() {

  setlocale(LC_ALL, "Portuguese");

  #ifdef RATE  /* this branch will be compiled */
    #undef RATE /* undefining a constant macro */ 
    printf("Redefining RATE\n");
    #define RATE 0.068
  #else  /* this branch will not be compiled */
    #define RATE 0.068
  #endif /* An #endif is required to close the block of code. */

  printf("%f  %d\n", RATE, TERM);

  #if LEVEL > 6
    /* do something */
  #elif LEVEL > 5
    /* else if branch */
  #elif LEVEL > 4
    /* another else if */
  #else
    /* last option here */
  #endif

  // IF NOT DEFINED, EXECUTE THE BLOCK CODE
  #if !defined(VARIABLE)
    printf("Hello");
  #endif

  return 0;
}