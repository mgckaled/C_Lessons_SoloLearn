#include <stdio.h>

// SWITCH STATEMENT

int main() {

  // Unique Labels
  char letra = 'M';
  switch (letra)
  {
  case 'A':
    printf("A ou M\n");
    break;
  case 'M':
    printf("M\n");
    break;  
  case 'Z':
    printf("Z\n");
    break;
  default:
    printf("None of them.\n");
  }

  // Multiple Labels 
   switch (letra)
  {
  case 'A':
  case 'M':
    printf("A or M\n");
    break;
  case 'Z':
  case 'O':
    printf("Z or O\n");
    break;
  default:
    printf("None of them.\n");
  }

  /* 
  switch (expression) {
  case val1:
    statements
  break;
  case val2:
    statements
  break;
  default:
    statements
} */

  return 0;
}
