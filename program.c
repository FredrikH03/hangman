#include <stdio.h>

int main() 
{
    printf("welcome to hangman!\nplease choose a word to guess!\n");
    char chosenWord[10];
    scanf("%s", chosenWord);
    int length = str_length(chosenWord);
    printf("your chosen word is: %s\n", chosenWord);
    printf("%d\n", length);

    char hiddenWord[10];

    char hiddenWord = hide_word(chosenWord);

    print("%s\n", hiddenWord);

    return 0;
}
    
    
int str_length(char chosenWord[]) 
{
    int count;
    for(count = 0; chosenWord[count] != '\0'; count++);
    return count;
}

int hide_word(chosenWord)
{
    char word[10];
    for(int i = 0; chosenWord[i] != '\0'; i++)
    {
        word[i] =  "_";
    }

}