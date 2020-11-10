
/* ARRAYS IN C

An array is a data structure that stores a collection of related values that 
are all the same type.

- Arrays are useful because they can represent related data with one 
descriptive name rather than using separate variables that each 
must be named uniquely.

- An array declaration includes the type of the values it stores, an identifier, 
and square brackets [ ] with a number that indicates the array size

- An array is stored in contiguous memory locations and cannot change 
size after being declared.

The contents of an array are called elements with each element 
accessible by an index number. In C, index numbers start at 0.
*/

#include <stdio.h>

int main() {

  // Example of declaration
  int test_scores[25]; /* An array size 25 */ 

  // Pode ser iniciada ao ser declarada usando chaves {}. 
  float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99}; 

  // Pode ser parcialmente iniciada. Valores restantes serão igualados a 0
  float p[5] = {3.2, 6.55}; 

  // can be changed through an assignment statement
  int x[5] = {20, 45, 16, 18, 22};
  x[1] = 260;

  printf("First element: %d\n", test_scores[0]);
  printf("Second element: %f\n", prices[1]);
  printf("Tirth element: %x\n", p[2]);
  printf("The second element is %d\n", x[1]);

  float purchases[3] = {10.99, 14.25, 90.50};
  float total = 0;
  int k;
  
  /* Using Loops with Array*/
  for (k = 0; k < 3; k++) {
    // cada loop soma um elemento dentro do 'total'
    total += purchases[k]; // total = total + purchases[k]
  }
  printf("Purchases total is %6.2f\n", total); // /* Output:  Purchases total is 115.74 */ 
  
  // Loops are also useful for assignment. Example:
  int a[10];
  int j;
  for (j = 0; j < 10; j++) {
    a[j] = (j+1) * 10;
    printf("Element [%d] = %d\n", j, a[j]);
  }

  return 0;
}