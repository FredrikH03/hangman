#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char * hideWrd(int length) {
  static char temp[50];
  for (int i = 0; i < length; i++) {
    temp[i] = '_';
  }
  temp[length] = '\0';

  return temp;
}

void gamefn(char *chosenWord, char *hiddenWord){

  printf("\nyour chosen word is: %s\n", chosenWord);

  int lives = 10;
  bool ongoing = true;
  char guess[50];
  char guessSingular;
  bool guessBool;

  while(ongoing == true && lives > 0){
    guessBool = false;
    printf("Status: %s\n\n", hiddenWord);
    printf("your guess sir? ");
    scanf("%49s", guess);
    int guesslen = strlen(guess);

    if(guesslen == 1){
      printf("\nthis guess is of length 1 or length of word\n\n");
      guessSingular = guess[0];
      for(int i = 0; i < strlen(chosenWord); i++){
        if(chosenWord[i] == guessSingular){
          hiddenWord[i] = chosenWord[i];
          guessBool = true;
        }

      }

      if(guessBool == true){
        printf("correct guess\n\n");
      }
      else{
        printf("incorrect guess\n\n");
        lives -= 1;
      }
    }
    else if (guesslen == strlen(chosenWord)) {
      if(strcmp(guess, chosenWord) == 0){
        ongoing = false;

      }
      else{
        printf("incorrect guess\n\n");
        lives -= 2;
      }
    }
    else{
      printf("invalid guess\n\n");
    }

    if(strcmp(hiddenWord, chosenWord) == 0){
      ongoing = false;
    }
  }
  if(lives < 1){
    printf("you lose\n\n");
  }
  else if (lives > 0) {
    printf("you win!\n\n");
  }

}
