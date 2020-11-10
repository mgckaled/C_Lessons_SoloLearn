
/*
EDOM and ERANGE Error Codes

Some of the mathematical functions in the math.h library set errno to 
the defined macro value EDOM when a domain is out of range.
Similarly, the ERANGE macro value is used when there is a range error.
For example:

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <errno.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float k = -5;
  float num = 1000;
  float result;

  errno = 0;
  result = sqrt(k); /* SQUARE ROOT */
  if (errno == 0) // gera um número complexo
    printf("%f ", result);
  else if (errno == EDOM) /* DOMAIN OUT OF RANGE */
    fprintf(stderr, "%s\n", strerror(errno)); /* fprintf -> formatted output */

  errno = 0;
  result = exp(num); // Irá gerar um número muito extenso.
  if (errno == 0)
    printf("%f ", result);
  else if (errno == ERANGE) /* RANGE ERROR --> result too large */
    fprintf(stderr, "%s\n", strerror(errno));

  return 0;
}