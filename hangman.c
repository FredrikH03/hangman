#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() 
{
    printf("welcome to hangman!\nplease choose a word to guess!\n");

    char chosenWord[50];
    scanf("%s", chosenWord);
    

    int length = 0;
    length = str_length(chosenWord);

    printf("your chosen word is: %s\n", chosenWord);
    printf("%d\n", length);

    char hiddenWord[50];
    hide_word( & hiddenWord, length);
    
    printf("returned: %s\n", hiddenWord);

    bool won = false;
    int lives = 10;
    while(won == false && lives > 0) {
        
        printf("please enter guess: \n");
        char userGuess[50];
        scanf("%s", userGuess);

        int i; 
        for (i = 0; userGuess[i] != '\0'; i++);

        printf("userguess length: %d\n", i);

        if (i == length || i == 1){
            printf("valid guess\n");
            if (i == 1){
                char tempLetter = userGuess[0];
                int temp;


                for (temp = 0; chosenWord[temp] == tempLetter; temp++);

                printf("temp int: %d,", temp);
                printf(" and tempLetter: %s\n");

                if(temp > 0){
                    printf("correct guess\n");
                }

                else if (temp == 0){
                    printf("incorrect guess\n");
                    lives -= 1;
                }
            }

            if(i == length){
                printf("\nguessing whole word\n");
                int test = strcmp(chosenWord, userGuess);
                if (test == 0){

                    printf("\nguess was correct\n");
                    won = true;
                }
            }
        }
        else {
            printf("\ninvalid guess\n");
        }

        printf("\ngame still ongoing\n");
    }
    
    if(won == true){
        printf("\nwoag... you won!\n");
    }
    else {
        printf("\nyou lost you fucking dumbass\n");
    }

    return 0;
}
    


int str_length(char chosenWord[]) 
{
    int count;
    for(count = 0; chosenWord[count] != '\0'; count++);
    return count;
}

int hide_word( char hiddenWord[], int length) {
	for (int i = 0; i < length; i++) {
		hiddenWord[i] = '_';
	}
	hiddenWord[length] = '\0';

	/*char temp[50];

	for (int i = 0; i < length; i++) {
		temp[i] = '_';
	}
	temp[length] = '\0';
	hiddenWord = temp;
    printf("value in temp: %s\n", temp);
	printf("value in hiddenWord: %s\n", hiddenWord);*/


}
