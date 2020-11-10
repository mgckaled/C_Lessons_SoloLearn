#include <stdio.h>

int main() {

  // the while statement is called a loop structure because it executes 
  // statements repeatedly while an expression is true, looping over and 
  // over again. It takes the form:

  int count = 1;
  // WHILE
  // enquanto 'count' for menor que oito, repetir os laços do bloco.
  while (count < 8) 
  {
    printf("Count = %d\n", count);
    count++; // Incremento
  }

  // DO-WHILE Loop
  int x = 5;
  do
  {
    printf("Count = %d\n", x);
    x--; // decremento
  } while (x > 0);

  // BREAK AND CONTINUE:

  int y = 1;
  while (y > 6)
  { 
    if (y == 2)
      continue;
    if (y == 4)
      break;
    printf("Count = %d\n", y);
    y++;
  }
  
  return 0;
}