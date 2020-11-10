#include <stdio.h>
#include <stdlib.h>

int main() {

  // retorna o valor ado próximo caractere
  char a = getchar();
  printf("You entered: %c \n", a);

  int b, c ;
  // scanf -> input que permite especificar formatação
  // & -> operador de endereço: fornece o local de memória de uma variável
  printf("Digite 2 números separados por espaço:");
  scanf("%d %d", &b, &c);
  printf("\nSoma:  %d", b+c);

  return 0;
}