#include <stdio.h>

int main() 
{
    printf("welcome to hangman!\nplease choose a word to guess!\n");
    char chosenWord[50];
    scanf("%s", chosenWord);
    int length = 0;
    length = str_length(chosenWord);
    printf("your chosen word is: %s\n", chosenWord);
    printf("%d\n", length);


    char hiddenWord[50];
    hide_word(hiddenWord, length);
    
    printf("returned: %s\n", hiddenWord);

    return 0;
}
    
    
int str_length(char chosenWord[]) 
{
    int count;
    for(count = 0; chosenWord[count] != '\0'; count++);
    return count;
}

int hide_word(hiddenWord, length) {
	char test[50];
	for (int i = 0; i < length; i++) {
		test[i] = '_';
	}
	test[length] = '\0';
	printf("%s\n", test);
	hiddenWord = test;
}
