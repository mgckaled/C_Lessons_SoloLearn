// THE VOID POINTER

// A void pointer is used to refer to any address type in memory 
// and has a declaration that looks like: void *ptr;

// Functions Using void Pointers void * square (const void *); 
// Using a void * return type allows for any return type. Similarly, parameters 
// that are void * accept any argument type. If you want to use the data passed 
// in by the parameter without changing it, you declare it const.

#include <stdio.h>
#include <stdlib.h>

// Functions Using void Pointers
// const to avoid changing in argument type
void* square (const void* num);

// Function Pointers as Arguments
int compare (const void *, const void *); 

int main() {

  int x, z, sq_int;
  x = 33;
  z = 6;
  float y = 12.4;
  char c = 'a';
  void *ptr; // void pointer
    
  ptr = &x; // for each assign we will have a different value.
  printf("void ptr points to %d\n", *((int *)ptr));
  ptr = &y;
  printf("void ptr points to %f\n", *((float *)ptr));
  ptr = &c;
  printf("void ptr points to %c", *((char *)ptr));

  // Functions Using void Pointers
  sq_int = square(&x);
  printf("%d squared is %d\n", z, sq_int);

  //Function Pointers as Arguments
  int arr[5] = {52, 23, 56, 19, 4};
  int num, width, i;
  
  num = sizeof(arr)/sizeof(arr[0]);
  width = sizeof(arr[0]);
  qsort((void *)arr, num, width, compare);
  for (i = 0; i < 5; i++)
    printf("%d ", arr[i]);

  return 0;
}

// Functions Using void Pointers
void* square (const void *num) {
  int result;
  result = (*(int *)num) * (*(int *)num);
  return result;
}

// Function Pointers as Arguments
int compare (const void *elem1, const void *elem2) {
  if ((*(int *)elem1) == (*(int *)elem2))
    return 0;
  else if ((*(int *)elem1) < (*(int *)elem2))
    return -1;
  else
    return 1;
}