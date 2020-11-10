#include <stdio.h>


int main() {

  // IF ANINHADO 

  int num = 31;
  if (num > 22) {
    if (num > 30) {
      printf("O número é maior que 22 e 30.");
    }
  }

  // ESLE IF STATEMENTS 

  int score = 92;

  if ( score >= 95 )
  {
    printf("%s", "\nTop 5%\n");
  }
  else if (score >= 90)
  {
    printf("%s", "\nTop 10%\n");
  }
  else if (score > 80)
  {
    printf("%s", "\nYou passed.\n");
  }
  else
  {
    printf("%s", "\nYou did not pass.\n");
  }
  

  return 0;
}