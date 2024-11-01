#include <stdio.h>

int main() {

    int a;
    float b;
    char word[100]; // Declare a character array to store the word

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You have entered an integer %d \n", a);

    printf("Enter a float number: ");
    scanf("%f", &b);
    printf("You have entered a float number: %.2f \n", b);

    printf("Enter a word: ");
    scanf("%s", word); // Read a word using fgets
    printf("You have entered a word: %s \n\n", word);

    return 0;
}