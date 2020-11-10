
// The calloc() function allocates memory based on the size of a specific item, 
// such as a structure. The program below uses calloc to allocate memory for a 
// structure and malloc to allocate memory for the string within the structure:

// The realloc() function expands a current block to include additional memory.

#include <stdio.h>
#include <stdlib.h> // includes memory management functions.
#include <locale.h> // allow portuguese characters
#include <string.h> // strcpy()

typedef struct {
  int num;
  char *info;
} record;

int main() {

  setlocale(LC_ALL, "Portuguese");

  record *recs; 
  int num_recs = 2;
  int k;
  char str[] = "This is information";

  // allocate memory for 2 record structures.
  recs = calloc(num_recs, sizeof(record));

  if (recs != NULL) {
    for (k = 0; k < num_recs; k++) {
      (recs+k)->num = k;
      //  to allocate memory for the string within the structure
      (recs+k)->info = malloc(sizeof(str));
      strcpy((recs+k)->info, str);
    }
  }

  for (k = 0; k < num_recs; k++) {
    printf("%d\t%s\n", (recs+k)->num, (recs+k)->info);
  }
  

  int *ptr;
  ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */
  if (ptr != NULL) {
    *(ptr+2) = 50;  /* assign 50 to third int */
  }
  // includes additional memory
  ptr = realloc(ptr, 100*sizeof(*ptr)); /* 100 ints */
  *(ptr+30) = 75;
  printf("%d %d", *(ptr+2), *(ptr+30));

  return 0;
  
}