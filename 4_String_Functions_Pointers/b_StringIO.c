
// STRING INPUT AND OUTPUT

// To retrieve a line of text or other string from the user, 
// C provides the scanf(), gets(), and fgets() functions.

// scanf() stops reading input when it reaches a space.
// To read a string with spaces, use the gets() function. 
// It reads input until a terminating newline is reached 
// (the Enter key is pressed).

// String output is handled with the fputs(), puts(), and printf() functions.

// The fputs() requires the name of the string and a pointer to 
// where you want to print the string. To print to the screen, 
// use stdout which refers to the standard output.

#include <stdio.h>

int main() {

  char first_name[25];
  int age;
  printf("Enter your first name and age: \n");
  // When scanf() is used to read a string, there is no need for & to 
  // access the variable address because an array name acts as a pointer.
  scanf("%s %d", first_name, &age); 
  printf("Your name is %s and you are %d years old\n", first_name, age);
  // A safer alternative to gets() is fgets(), which reads up to a 
  // specified number of characters

  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);
  fputs(city, stdout);
  printf("\n is a fun city.");

  return 0;
}  