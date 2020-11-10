#include <stdio.h>

int main() {
  int score = 89;
  
  /* 
  * IF = també conhecido como ESTRUTURA DE DECISÃO 
  * Os argmentos podem conter uma linha ou mais, que neste caso, requer chaves {bloco}
  * Se a condição dentro do parenteses for atendida, executa o código dentro da estrutura IF
  */
  if (score > 75)
    printf("Yoce passou.\n");
  
  if (score > 85) {
    printf("Yoce passou.\n");
    printf("Muito bom!\n");
  }
    
  return 0;
}