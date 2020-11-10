#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  FILE *fptr; /* FILE POINTER */
  char filename[50];
  printf("Digite ç o nome do arquivo: ");
  gets(filename); /* armazenar o input */
  fptr = fopen(filename, "w"); /* Criar o arquivo com o nome digitado */

  /* write to file */
  fprintf(fptr, "Inventory\n"); /* texto da linha 1*/
  fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29); /* texto da linha 2 */
  fputs("End of List", fptr); /* texto da terceira linha, sem formatação */

  return 0;
}