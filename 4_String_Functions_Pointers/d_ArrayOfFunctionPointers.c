
// An array of function pointers can replace a switch or 
// an if statement for choosing an action, as in the following program:

#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main() 
{
  int x, y, choice, result;
  // declares the array of function pointers.
  int (*op[4])(int, int);

  // Each element of the array 'op' is an especfic function operation
  op[0] = add;
  op[1] = subtract;
  op[2] = multiply;
  op[3] = divide;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y); // assign each inputed value to variables.
  printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice); // assign the number selected to the variable 'choice'
  result = op[choice](x, y); // the number of the elment will determine the operation
  printf("The result is %d", result);
    
  return 0;
}

int add(int x, int y) {
  return(x + y);
}

int subtract(int x, int y) {
  return(x - y);
}

int multiply(int x, int y) {
  return(x * y);
}

int divide(int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
}