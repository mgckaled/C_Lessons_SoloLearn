/* MEMORY MANAGEMENT */

// When you dclare a variable using a basic data type, C automatically 
// allocates space for the variable in an area of memory called the stack.

// Dynamic memory allocation is the process of allocating and freeing 
//memory as needed. Now you can prompt at runtime for the number of array
// elements and then create an array with that many elements. 
// Dynamic memory is managed with pointers that point to newly allocated 
// blocks of memory in an area called the heap.

#include <stdio.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  int x;
  printf("%d", sizeof(x));  /* alocated with 4 bytes -> output: 4 */
  int arr[10];
  printf("%d", sizeof(arr)); /* output: 40 */

  return 0;
}