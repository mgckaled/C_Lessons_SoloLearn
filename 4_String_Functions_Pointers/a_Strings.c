
/* STRINGS IN C */

// A string in C is an array of characters that ends with a NULL character '\0'.
// DEFAULT STRING DECLARATION --> char str_name[str_len] = "string"; 

// When you provide a string literal to initialize the string, the compiler 
// automatically adds a NULL character '\0' to the char array.

// If the declaration does not include a char array size, then it 
// will be calculated based on the length of the string in the 
// initialization plus one for '\0':

// A string pointer declaration such as char *str = "stuff"; is considered 
// a constant and cannot be changed from its initial value.

#include <stdio.h>
#include <string.h> // Standard Library string functions

int main() {

  char str1[6] = "hello";
  char str2[ ] = "WORLDWAR"; /* size 6 */
  printf("Size of str1 variable: %d\n", sizeof(str1));
  printf("Size of str2 variable: %d\n", sizeof(str2));  

  // A string can also be declared as a set of characters:
  char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char str4[] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */ 

  /*   <STRING.H>   */
  //strlen() - get length of a string
  printf("length of str1: %d\n", strlen(str1));
  //strcat() - merge two strings
  printf("merging two strings: %s\n", strcat(str1, " world"));
  //strcpy() - copy one string to another
  char name[15];
  strcpy(name, "Fulano de Tal");
  printf("The variable name is: %s\n",name);
  //strlwr() - convert string to lower case
  printf("str2 converted to lower case: %s\n", strlwr(str2));
  //strupr() - conver string to upper case
  printf("str1 converted to upper case: %s\n", strupr(str1));
  //strrev() - reverse string
  printf("str2 string reversed: %s\n", strrev(str2));
  //strcmp() - compare two strings
  char str5[4] = "abc";
  char str6[4] = "abd";
  int retorno;
  retorno = strcmp(str5, str6);
  printf("return: %d\n", retorno);

  return 0;
}