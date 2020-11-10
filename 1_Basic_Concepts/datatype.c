#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declaração 
  int i;
  // Inicialização de uma variável
  i = 10;
  // printf -> função built-in de output
  // possui 2 parâmetros ou argumentos. 1) O texto / 2) a variável indicada pela %
  // \n --> quebra de linha
  printf("Hello World %d \n", i);

  // Tipos de Dados Básicos: int/float/double/char
  // 'sizeof' operator that gives the memories requirements for a particular data type.
  printf("\n ** Size in Memory ** \n");
  printf("int: %ld \n", sizeof(int));
  printf("int: %ld \n", sizeof(float));
  printf("int: %ld \n", sizeof(double));
  printf("int: %ld \n", sizeof(char));
  return 0;

} 