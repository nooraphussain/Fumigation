//Accept a char input from the user and display it on the console

#include <stdio.h>

int main(){

    char word[100];

    printf("Enter a word: ");
    scanf("%s", word); 
    printf("You have entered a word: %s \n\n", word);

    return 0;
}