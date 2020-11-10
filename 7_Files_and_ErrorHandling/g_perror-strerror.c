
/* 
The perror and strerror Functions

When a library function sets errno, a cryptic error number is assigned. 
For a more descriptive message about the error, you can use perror(). 
You can also obtain the message using strerror() in the string.h header file, 
which returns a pointer to the message text.

perror() must include a string that will precede the actual error message. 
Typically, there is no need for both perror() and strerror() for the same error, 
but both are used in the program below for demonstration purposes:

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {

  setlocale(LC_ALL, "Portuguese");

  /* print a string list of possible erros with its code number */
  for (int x = 0; x < 135; x++) {
    fprintf(stderr, "%d: %s\n", x, strerror(x));
  }

  FILE *fptr;

  errno = 0;
  fptr = fopen("c:\\nonexistantfile.txt", "r");
  if (fptr == NULL) {
    perror("Error"); /*strig that will precede the actual erro message */
    fprintf(stderr, "%s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }
  fclose(fptr);

  return 0;
}