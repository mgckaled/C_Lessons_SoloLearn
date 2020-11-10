
/* Two-Dimensional Arrays

- A two-dimensional array is an array of arrays and can be thought of as a table. 
You can also think of a two-dimensional array as a grid for representing a 
chess board, city blocks, and much more.

- To access an element of a two-dimensional array, both the row index and column 
index are required.

*/

#include <stdio.h>

int main() {

  /* A 2 x 3 array  --> 2 linhas e 3 colunas*/ 
  int a[2][3] = {{3, 2, 6}, {4, 5, 20}}; 
  printf("Element 3 in row 2 is %d\n", a[1][2]); /* 20 */
  a[1][2] = 25;
  printf("Element 3 in row 2 is %d\n", a[1][2]); /* 25 */ 

  int k, j;
  /* display array contents */
    // laços da linha - 3 2 6
    for (k = 0; k < 2; k++) {
      // laços de linha para cada coluna - 4 5 25
      for (j = 0; j < 3; j++) {
        printf(" %d", a[k][j]);
      }
      printf("\n");
    }

  return 0;
}