#include <stdio.h>

int main() {
  /*  OPERADORES LÓGICOS
  < less than
  <= less than or equal to
  > greater than
  >= greater than or equal to
  == equal to
  != not equal to
  */

  int num = 41;
  num += 1; // Assignment Operators
  if (num == 42) // igualdade de valores --> '=='
    printf("You won!");

  int num_2 = 23;
  num_2++; // Increment variable by 1
  if (num_2 <= 23)
    printf("You loose!");

  // uma expressão cujo valor é não nulo é considerada verdadeira,
  // logo a expressão dentro do bloco será executada.
  int estoque = 20;
  if (estoque) {
    printf("Ordem recebida.");
  }
}