#include <stdio.h>

int main() {

  /* IF ELSE STATEMENT */

  int score = 91;
  if (score >= 90)
  {
    printf("TOP 10%%\n");
  }
  else 
  {
    printf("Less than 90.\n");
  }

  /* Conditional Expressions --> ? : */

  int y;
  int x = 3;
  y = (x >= 5) ?  5 : x;
  /* This is equivalent to:
  if (x >= 5)
    y = 5;
  else
    y = x;
  */

  return 0;
}