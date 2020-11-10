/* 
The #define Directive

The #define directive is used to create object-like macros for constants 
based on values or expressions. 

#define can also be used to create function-like macros with arguments that 
will be replaced by the preprocessor.

Be cautious with function-like definitions. Keep in mind that the preprocessor 
does a direct replacement without any calculations, which can lead to 
unexpected results, as demonstrated with the following program:
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14 /* VARIABLE */
#define AREA(r) (PI*r*r) /* FUNCTION */

// If a # directive is lengthy, you can use the \ continuation character 
// to extend the definition over more than one line
#define VERY_LONG_CONSTANT \
23.678901

#define MAX 100
#define MIN 0
#    define SQUARE(x) \
    x*x

int main() {

  setlocale(LC_ALL, "Portuguese");

  float radius = 2;
  printf("%3.2f\n", PI);
  printf("Area is %5.2f\n", AREA(radius));
  printf("Area with radius + 1: %5.2f\n", AREA(radius+1));
  return 0;

  printf("%d\n", VERY_LONG_CONSTANT * SQUARE(2));

  return 0;
}