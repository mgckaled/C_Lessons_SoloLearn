  // C programs must have at least one function named main():

  // A function:
  // * is a block of code that perform a specific task
  // * is reusable
  // * makes a program easier to test
  // * can be modified without changing the calling program
  
  // Functions basic Estructure: 
  // return_type function_name(parameters); 

  // the keyword 'void' indicates that a functions does not returna a value.

  // Static variables have a local scope but are not destroyed 
  // when a function is exited. Therefore, a static variable retains 
  // its value for the life of the program and can be accessed every time 
  // the function is re-entered.

#include <stdio.h>

/*  declation of a fuction  -> before the main function */  
// function prototype -> parameter type and names included 
int square (int num);
int sum_up (int a, int b);
void say_hello(); 
int factorial (int f);

/* Variable Scope - Global -> visible to the entire program */
int global_1 = 0;
#define global_2 100 

// FUNÇÃO PRINCIPAL - ONDE TODAS AS DEMAIS FUNÇÕES SERÃO CHAMADSAS
int main() {

  // Declaring variables:
  int x, a, b, result_1, result_2, local1, local2, i, f;

  // square function
  x = 5;
  result_1 = square(x); // atribuição do resultado a variável 'result'
  printf("%d squared is %d\n", x, result_1);

  // sum_up function
  a = 3;
  b = 12;
  result_2 = sum_up(a, b);
  printf("%d + %d = %d\n", a, b, result_2);

  // Variable Scope --> refers to the visibility of variables within a program.
  local1 = 5;
  local2 = 10;
  global_1 = local1;
  printf("%d\n", global_1);

  // Iteration of a function
  for (i = 0; i < 5; i++) {
    say_hello();
  }

  // Recursive Functions
  f = 5;
  printf("The factorial of %d is %d\n", f, factorial(f));



  return 0;
}

/*  declations of a fuction - > after the main function*/  

int square (int num) {
  int y;
  y = num * num;
  // The return statement is used to send a value back to the calling statement.
  return(y);
}

int sum_up (int a, int b) {
  a += b;
  return a;
}

void say_hello() {
  // A static variable is initialized when declared and requires the prefix 'static'.
  static int num_calls = 1;

  printf("Hello number %d\n", num_calls);
  num_calls++; // increment
}

int factorial(int f) {
  if (f == 1)
    return (1);
  else
    return (f * factorial(f-1));
}
