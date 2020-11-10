
// Structures with Structures

// The members of a structure may also be structures.

// struct myStruct *struct_ptr : defines a pointer to the myStruct structure.
// struct_ptr = &struct_var: stores the address of the structure variable struct_var in the pointer struct_ptr.
// struct_ptr -> struct_mem: accesses the value of the structure member struct_mem.

// A function can have structure parameters that accept arguments by value 
// when a copy of the structure variable is all that is needed. For a function 
// to change the actual values in a struct variable, pointer parameters 
// are required.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  float radius;
  point center;
} circle; 

// Pointers to Structures
typedef struct{
  char name[50];
  int number;
  int age;
} student;

typedef struct {
  int id;
  char title[40];
  float hours; 
} course;

typedef struct {
  int h;
  int w;
  int l;
} box;


void showStudentData(student *st);
void update_course(course *class);
void display_course(course class);

/*  MAIN FUNCTION  */
int main() {

  // point (x , y) is inside the { }
  circle c = {4.5, {1, 3}};
  // assing 2 dots to access nested struct
  printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y); /* 4.5  1,3 */

  // initialize a struct
  student st1 = {"Krishna", 5, 21};
  student st2 = {"Marcel", 2, 31};
  showStudentData(&st1);
  showStudentData(&st2);

  course cs2;
  update_course(&cs2);
  // A function can have structure parameters that accept arguments by value 
  // when a copy of the structure variable is all that is needed.
  display_course(cs2);
  return 0;

  box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
  int k, volume;
  for (k = 0; k < 3; k++) {
    volume = boxes[k].h*boxes[k].w*boxes[k].l;
    printf("box %d volume %d\n", k, volume);
  }
  
  return 0;
}

// Struct pointer as a function parameter
void showStudentData(student *st) {
  printf("\nStudent:\n");
  printf("Name: %s\n", st->name);
  printf("Number: %d\n", st->number);
  printf("Age: %d\n", st->age);
  // The -> operator allows to access members of the struct though the pointer.
}

// For a function  to change the actual values in 
// a struct variable, pointer parameters  are required.
void update_course(course *class) {
  strcpy(class->title, "C++ Fundamentals");
  class->id = 111;
  class->hours = 12.30;
}

void display_course(course class) {
  printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}