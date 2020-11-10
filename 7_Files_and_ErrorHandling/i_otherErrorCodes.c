
/* 
The feof and ferror Functions

In addition to checking for a NULL file pointer and using errno, the feof() 
and ferror() functions can be used for determining file I/O errors:

feof(fp) Returns a nonzero value if the end of stream has been reached, 
0 otherwise. feof also sets EOF.

ferror(fp) Returns a nonzero value if there is an error, 0 for no error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <errno.h>
#include <string.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  FILE *fptr;
  int c;

  errno = 0;
  fptr = fopen("c:\\myfile.txt", "r");
  if (fptr == NULL) {
    fprintf(stderr, "Error opening file. %s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }

  while ((c = getc(fptr)) != EOF) /* read the rest of the file */
    printf("%c", c);

  if (ferror(fptr)) {
    printf("I/O error reading file.");
    exit(EXIT_FAILURE);
  }
  else if (feof(fptr))
    printf("End of file reached.");

  fclose(fptr);

  return 0;
}