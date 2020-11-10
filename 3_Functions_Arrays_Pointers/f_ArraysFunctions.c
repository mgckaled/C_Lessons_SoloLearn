// Functions & Arrays

// An array cannot be passed by value to a function. 
// However, an array name is a pointer, so just passing an array 
// name to a function is passing a pointer to the array.

// Just as a pointer to an array can be passed into a function, 
// a pointer to an array can be returned, as in the following program:

// Keep in mind that a[k] is the same as *(a + k).


#include <stdio.h>
// Functions with Array Parameters
int add_up (int *a, int num_elements);
// Functions that Return an Array
int * get_evens();

/* PRINCIPAL */
int main() {

  // Functions with Array Parameters
  int orders[5] = {100, 220, 37, 16, 98};
  printf("Total orders is %d\n", add_up(orders, 5)); 

  // Functions that Return an Array
  int *a;
  int j;

  a = get_evens(); /* get first 5 even numbers */
  for (j = 0; j < 5; j++)
    printf(" %d", a[j]); 

  return 0;
}

// Functions with Array Parameters
int add_up (int *a, int num_elements) {
  int total = 0;
  int k;

  for (k = 0; k < num_elements; k++) {
    total += a[k];
  }

  return (total);
} 

// Functions that Return an Array
int * get_evens() {
  // A static int variable remains in memory while the program is running
  static int nums[5];
  int j;
  int even = 0;
  // Soma em 2 a cada laço de repetição
  for (j = 0; j < 5; j++) {
    nums[j] = even += 2;
  }

  return (nums);
}


