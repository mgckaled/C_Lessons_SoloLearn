/* POINTERS */

// Pointers are very important in C programming because they allow you 
// to easily work with memory locations.

// They are fundamental to arrays, strings, and other data structures and 
// algorithms.

// A pointer is a variable that contains the address of another variable. 
// In other words, it "points" to the location assigned to a variable and 
// can indirectly access the variable.

// Pointers are declared using the * symbol and take the form:
// pointer_type *identifier 

// ointer_type is the type of data the pointer

// Asterisk * declares a pointer and should appear next to the 
// identifier used for the pointer variable.


#include <stdio.h>

void swap (int *num1, int *num2);

int main() {


  int j = 63;
  // Pointers should be initialized to NULL until they are assigned a valid location.
  int *p = NULL;
  p = &j; 
  printf("The address of j is %x\n", &j);
  printf("p contains address %x\n", p);
  printf("The value of j is %d\n", j);
  printf("p is pointing to the value %d\n", *p); 

  // Some algorithms use a pointer to a pointer
  int a = 12;
  int *p1 = NULL;
  int **ptr = NULL;
  p1 = &a;
  ptr = &p1;

  // Pointers and Arrays
  int x[5] = {22, 33, 44, 55, 66};
  int *ptr_x = NULL;
  int i;
  ptr_x = x; // atribuir o pointer a array 
  for (i = 0; i < 5; i++) {
    // pointing each element --> using address arithmetic to transverse the intere array
    printf("%d ", *(ptr_x + i));
    printf("\n");
  }
  // Besides using + and – to refer to the next and previous memory 
  // locations, you can use the assignment operators to change the address 
  // the pointer contains.

  printf("%d  %x\n", *ptr_x, ptr_x);  /* 22 */
  ptr_x++;
  printf("%d  %x\n", *ptr_x, ptr_x);   /* 33 */
  ptr_x += 3;
  printf("%d  %x\n", *ptr_x, ptr_x);   /* 66 */
  ptr_x--;
  printf("%d  %x\n", *ptr_x, ptr_x);   /* 55 */
  ptr_x -= 2;
  printf("%d  %x\n", *ptr_x, ptr_x);   /* 33 */ 
  

  // Pointer and Functions
  int z = 25;
  int y = 100;
  printf("x is %d, y is %d\n", z, y); 
  swap(&z, &y);
  printf("x is %d, y is %d\n", z, y); 

  return 0;

}

void swap (int *num1, int *num2) {
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}