/* 
Preprocessor Operators

The C preprocessor provides the following operators.

The \# Operator
The \\# macro operator is called the stringification or stringizing operator 
and tells the preprocessor to convert a parameter to a string constant.
White space on either side of the argument are ignored and escape sequences 
are recognized.

The \\## operator is also called the token pasting operator because 
it appends, or "pastes", tokens together.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TO_STR(x) #x

#define VAR(name, num) name##num  /* ## -> token pasting operator */

#define CONCAT(a, b) a##b

int main() {

  setlocale(LC_ALL, "Portuguese");

  printf("%s\n", TO_STR( 123\\12 )); /* Output: "123\\12" */


  int x1 = 125;
  int x2 = 250;
  int x3 = 500;
  
  printf("%d\n", VAR(x, 3)); /* Turns VAR(x3) */

  int a = 4;
  int b = 5;
  int CONCAT(a,b) = a + b;
  printf("%d", ab);

  return 0;
}