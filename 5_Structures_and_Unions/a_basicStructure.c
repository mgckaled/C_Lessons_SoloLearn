
// STRUCTURES

// A structure is a user-defined data type that groups related variables 
// of different data types.

// A structure declaration includes the keyword struct, 
// a structure tag for referencing the structure, and curly braces { } 
// with a list of variable declarations called members.

// A structure is also called a composite or aggregate data type. 
// Some languages refer to structures as records.

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy()


// Declarations Using Structures
// To declare variables of a structure data type, you use the keyword struct 
// followed by the struct tag, and then the variable name.
struct student {
  int age;
  int grade;
  char name[40];
};

// Using typedef: typedef is commonly used with structures because it 
// eliminates the need to use the keyword struct when declaring variables.
  typedef struct {
  int id;
  char title[40];
  float hours; 
} course; 

int main() {

  /* declare two variables with initial values */
  //student
  struct student s1;
  s1 = (struct student){19, 9, "John"};
  struct student s2 = {22, 10, "Batman"};
  //course (without 'struct' due keyword 'typedef')
  course cs1;
  cs1 = (course) {341300, "OOP", 13.5};
  course cs2 = {341279, "Intro to C++", 12.5};
  course cs3;
  cs3.id = 341281;  /* initialize cs3 */
  strcpy(cs3.title, "Advanced C++");  /* initialize cs3 */
  cs3.hours = 14.25;  /* initialize cs3 */
  
  // use dot (.) to calling a struct data type
  // You can use named member initialization when initializing 
  // a structure to initialize corresponding members:

    /* display student info */
  printf("Student: %s, %d, %d grade\n", s1.name, s1.age, s1.grade);
  printf("Course: { id number %d, %s, %2.2f hours } \n", cs1.id, cs1.title, cs1.hours);

    /* display course info */
  printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
  printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);
  printf("%d\t%s\t%4.2f\n", cs3.id, cs3.title, cs3.hours);
  // Also note the format specifiers %4.2f include width and precision options.

  return 0;
}