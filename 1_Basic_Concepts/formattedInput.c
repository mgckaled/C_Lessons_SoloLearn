#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // Declaração de variáveis
  int x;
  float num;
  char text[20]; // máximo de 20 caracteres
  /* scanf --> função built-in utilizada para associar o input a variáveis (declaradas) */
  // repare que o "&" deve ser utilizado para viabilizar as associações
  printf("Digite os dados: \n"); 
  scanf("%2d %f %5s", &x, &num, text);
  printf("%d  %d  %s", x, num, text); 
  return 0;
}

  //  %[*][max_field]conversion character
  // [*] é opcional é opcional -> excluirá a obrigatoriedade do input
  // [max_field] é opicional --> fornece o número máximo de caracteres que será assinalado

  // conversion character - 
  // d decimal
  // c character
  // s string
  // f float
  // x hexadecimal