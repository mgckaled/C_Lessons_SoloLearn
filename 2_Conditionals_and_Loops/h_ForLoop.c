#include <stdio.h>

int main() {

  // FOR LOOP
  // for (initvalue; condition; increment) {
    // statements;
  // }

  int i;
  int max = 10;
  
  // para cada valor de i, de 1 até 10, executar o código.
  for (i = 0; i < max; i++) {
    printf("%d\n", i);
  }
  // Pode-se retirar o 'initvalue se o mesmo for referenciado posteriormente.
  for (; i < max; i++) {
    printf("%d\n", i);
  }
  // Nested FOR LOOP
  int k, j;
  int table = 10;
  int max_t = 12; 

  // para cada valor de 1 até 10
  for (k = 1; k <= table; k++) {
    // para cada valor de 0 a 11 
    for (j = 0; j <= max_t; j++) {
      printf("%d x %d = %d\n", k, j, k*j);
    }
    printf("\n"); /* blank line between tables */ 
  }

  return 0;
}