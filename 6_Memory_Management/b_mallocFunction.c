/* The malloc Function */

// The malloc() function allocates a specified number of contiguous bytes in memory.

#include <stdio.h>
#include <stdlib.h> // includes memory management functions.
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  int *ptr;
  // malloc returns a pointer to the allocated memory.
  // Notice that sizeof was applied to *ptr instead of int, making the code 
  // more robust should the *ptr declaration be changed to a different data 
  // type later.
  ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */
  if (ptr != NULL) {
    *(ptr+2) = 50;  /* assign 50 to third int */
  }
  printf("3rd elem equals to %d\n", *(ptr + 2));

  // The free() function is a memory management function that is called to 
  // release memory. By freeing memory, you make more available for use 
  // later in your program.
  free(ptr);

  if (ptr != NULL) {
    *(ptr+2) = 40;
  }
  printf("3rd elem equals to %d\n", *(ptr + 2));
  
  return 0;
}