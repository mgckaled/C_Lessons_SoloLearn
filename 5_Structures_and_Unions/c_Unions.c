
/*  UNIONS */ 

// A union allows to store different data types in the same memory location.
// It is like a structure because it has members. 
// However, a union variable uses the same memory location for all its 
// member's and only one member at a time can occupy the memory location.

// A union declaration uses the keyword union, a union tag, and curly braces { } 
// with a list of members.

//  Union members can be of any data type, including basic types, strings, 
// arrays, pointers, and structures.

// Unions are used forr memory managementr. The largest member data type is 
// used to determine the size of the memory to share and then all members use 
// this one location. This process also helps limit memory fragmentation.


#include <stdio.h>
#include <string.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};

// Structures With Unions
typedef struct {
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
    int id_num;
    char VIN[20]; 
  } id;
} vehicle;

int main() {

  // After declaring a union, you can declare union variables. 
  // You can even assign one union to another of the same type:

  union val u1;
  union val u2;
  u2 = u1;


  // Accessing Union Members
  // by using the . dot operator between the variable name and the member name.
  union val test;
  test.int_num = 123;
  test.fl_num = 98.76;
  strcpy(test.str, "hello");

  printf("%d\n", test.int_num);
  printf("%f\n", test.fl_num);
  printf("%s\n", test.str);

  vehicle car1;
  // strcpy() to assign a string to a element
  strcpy(car1.make, "Ford");
  car1.model_year = 2017;
  car1.id_type = 0;
  car1.id.id_num = 123098; 

  /* display vehicle data */
  // The id_type keeps track of which union member stores a value. 
  // The following statements display car1 data, using the id_type to determine 
  // which union member to read:
  printf("Make: %s\n", car1.make);
  printf("Model Year: %d\n", car1.model_year);
  if (car1.id_type == 0)
    printf("ID: %d\n", car1.id.id_num);
  else
    printf("ID: %s\n", car1.id.VIN); 

  return 0;
}