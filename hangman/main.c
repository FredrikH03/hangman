#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "testin.c"

int main() {
  printf("\nplease choose a word: ");

  char chosenWord[50];
  scanf("%49s", chosenWord);

  char *hiddenWord = hideWrd(strlen(chosenWord));

  gamefn(chosenWord, hiddenWord);

  return 0;
}

