
/* Allocating Memory for Strings */

// When allocating memory for a string pointer, you may want to use 
// string length rather than the sizeof operator for calculating bytes.

// This approach is better memory management because you aren’t allocating 
// more space than is needed to a pointer. When using strlen to determine 
// the number of bytes needed for a string, be sure to include one extra byte 
// for the NULL character '\0'.
// A char is always one byte, so there is no need to multiply the 
// memory requirements by sizeof(char).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  char str20[20]; /* memory allocated = 20 */
  char *str = NULL;

  strcpy(str20, "12345"); // atribuindo valor a string 
  printf("str20 size: %d\n", sizeof(str20)); /* 20 */
  printf("str20 length: %d\n", strlen(str20)); /* 5 -> '12345' */
  str = malloc(strlen(str20)+1); /* make room for \0 */
  // // atribuindo espaço na memória suficiente e necessária para a string -> 6
  strcpy(str, str20); 
  printf("%s\n", str);
  printf("str size: %d\n", sizeof(str)); /* 4 */
  printf("str length: %d\n", strlen(str)); /* 5 */

  return 0;
}