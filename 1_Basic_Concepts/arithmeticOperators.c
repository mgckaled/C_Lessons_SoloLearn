#include <stdio.h>

int main() {

  int length = 10;
  int widht = 5;
  int area;
  area = length * widht;
  printf("%d \n", area);

  int i1 = 10;
  int i2 = 3;
  int quotient, remainder;
  float f1 = 4.2;
  float f2 = 2.5;
  float result;
  
  quotient = i1 / i2;
  remainder = i1 % i2;
  result = f1 / f2;

  printf("%d \n", quotient);
  printf("%d \n", remainder);
  printf("%f \n", result);


  /* TYPE CASTING -> Explicita e força o tipo de dado mostrado no Output */
  // incluir tipo prmitivo dentro do parenteses logo após o sinal de igualdade

  float media; 
  int total = 23;
  int count = 4;
  media = (float) total/count;
  printf("Media: %4.2f \n", media);


  /* Assignment Operators - OPERADORES DE ATRIBUIÇÃO */

  int x = 2;
  x += 1;  // 3
  x -= 1;  // 2
  x *= 3;  // 6
  x /= 2;  // 3
  x %= 2;  // 1
  x += 3 * 2;  // 7

  /* Increment & Decrement - INCREMENTO E DECREMENTO */

  int z, y;
  z--;  /* decrement z by 1 */
  y++; /* increment y by 1 */

  int X, Y, Z;
  Z = 3;
  X = Z--; /* assign 3 to x, then decrement z to 2 */
  Y = 3; 
  X = ++Y; /* increment y to 4, then assign 4 to x */
  /* Example */
  int n1 = 8; int n2 = 7;
  x++; x += y--; /* 16 */

  return 0;

  
}