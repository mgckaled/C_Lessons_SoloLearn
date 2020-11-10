/*An external file can be opened, read from, and written to in a C program. 
For these operations, C includes the FILE type for defining a file stream. 
The file stream keeps track of where reading and writing last occurred.

The stdio.h library includes file handling functions:
FILE Typedef for defining a file pointer.

fopen(filename, mode) Returns a FILE pointer to file filename which is 
opened using mode. If a file cannot be opened, NULL is returned.
Mode options are:
- r open for reading (file must exist)
- w open for writing (file need not exist)
- a open for append (file need not exist)
- r+ open for reading and writing from beginning
- w+ open for reading and writing, overwriting file
- a+ open for reading and writing, appending to file

fclose(fp) Closes file opened with FILE fp, returning 0 if close was successful.
EOF (end of file) is returned if there is an error in closing. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  FILE *fptr; /* FILE POINTER */
  
  // Criará um arquivo txt vazio
  fptr = fopen("myfile.txt", "w"); /* w open for writing (file need notexist) */
  if (fptr == NULL) { // se o pointer for igual a null, retorna erro
    printf("Error opening file.");
    return -1;
  }
  fclose(fptr);

  return 0;
}