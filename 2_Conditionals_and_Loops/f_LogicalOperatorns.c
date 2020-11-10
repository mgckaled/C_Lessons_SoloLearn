#include <stdio.h>

int main() {

  // The && Operator --> The logical AND operator && returns a true result 
  // only when both expressions are true.
  int num_1 = 10;
  if (num_1 > 5 && num_1 <= 15 )
    printf("Range (5-15) checked.\n");

  // The || Operator --> The logical OR operator || returns a true result 
  // when any one expression or both expressions are true.
  char roman_numeral = 'C';
  if (roman_numeral == 'c' || roman_numeral == 'C' )
    printf("Romand numeral value 100.\n");

  // The ! Operator --> The logical NOT operator ! returns the reverse of its value.
  // NOT true returns false, and NOT false returns true.
  if (!(roman_numeral == 'c' || roman_numeral == 'C'))
    printf("Romand numeral is not 100.\n");

  // Example of both operator put together
  if (!(num_1 == 10) || (num_1 > 0 && num_1 <= 100))
    printf("Input valid.\n"); 

  // Another example:
  int x = 3;
  int y = 8;
  if(!(x > 2 || y < 0)) 
    printf("true\n");
  else 
    printf("false\n");

  return 0;
}