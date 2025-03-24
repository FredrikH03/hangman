#include <stdio.h>



int main(){

  FILE *fptr;

  fptr = fopen("file.txt", "r");
    // Store the content of the file
  char myString[999999];

  // Read the content and store it inside myString
  fgets(myString, 999999, fptr);

  // Print the file content
  printf("%s", myString);

  // Close the file
  fclose(fptr);


  return 0;
}
