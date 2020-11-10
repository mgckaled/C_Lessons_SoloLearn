
// FUNCTION POINTERS 

// Pointers to functions, or function pointers, point to executable 
// code for a function in memory. Function pointers can be stored in 
// an array or passed as arguments to other functions.

// DEFAULT DECLARATION : return_type (*func_name)(parameters) 


#include <stdio.h>

void say_hello(int num_times); /* function declared */

int main() {

  void (*funptr)(int);  /* function pointer */
  funptr = say_hello;  /* pointer assignment */
  funptr(3);  /* function call */
  

  return 0;
}

void say_hello(int num_times) {
  int k;
  for (k = 0; k < num_times; k++)
  {
    printf("Hello\n");
  }
  
}
