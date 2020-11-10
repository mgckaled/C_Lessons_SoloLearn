
#include <stdio.h>

int main() {

  // A formatted string can be created with the sprintf() function. 
  // This is useful for building a string from other data types.
  char info[100];
  char dept[] = "HR";
  int emp = 75;
  // O primeiro parâmetro recebe o array declarado e não iniciado
  sprintf(info, "The %s dept has %d employees.", dept, emp);
  printf("%s\n", info);

  // Another useful function is sscanf() for scanning a string for values. 
  // The function reads values from a string and stores them at 
  // the corresponding variable addresses.
  char info_2[ ] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info_2, "%s %s %d", city, state, &population);
  printf("%d people live in %s, %s.", population, city, state);

  // Converting a String to a Number
  // atoi(str) Stands for ASCII to integer.
  char input[10];
  int num;
  printf("Enter a number: ");
  gets(input);
  num = atoi(input);
  printf("You entered %d", num);

  return 0;
}