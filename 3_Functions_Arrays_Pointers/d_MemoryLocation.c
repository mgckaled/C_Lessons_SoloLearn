
// A memory address is given as a hexadecimal number. 
// Hexadecimal, or hex, is a base-16 number system that uses digits 0 through 9 and 
// letters A through F (16 characters) to represent a group of four binary digits 
// that can have a value from 0 to 15.
// It's much easier to read a hex number that is 8 characters long for 32 bits 
// of memory than to try to decipher 32 1s and 0s in binary.

// The address of a variable stays the same from the time it is declared 
// until the end of its scope.

#include <stdio.h>

// declaração de função
void test (int k);

int main() {

  int num;
  printf("Enter a number: ");
  // &num is the address of variable num (hexadecimal number)
  scanf("%d", &num);
  printf("\nThe number entered was %d.\n",num );

  int i = 0; 
  // %x para mostrar formatação do valor em hexadecimal (endereço da memória)
  printf("The address of i is %x\n", &i);
  test(i);
  printf("The address of i is %x\n", &i);
  test(i);

  return 0;
}

void test (int k ) {
  printf("The adress of k is %x\n", &k);
}