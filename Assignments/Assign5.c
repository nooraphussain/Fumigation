// Write a program to show the grade obtained by a student after they enter their total mark percentage.
// The program should accept input from the user and display their grade as follows

#include <stdio.h>

int main() {

    float mark;

    printf("Enter your mark: ");
    scanf("%f", &mark);

    if(mark<0 || mark > 100){
        printf("Invalid mark");
    }

    switch ((int)mark/10)
    {
    case 10:
    case 9:
        printf("Grade: A\n");
        break;
    case 8:
        printf("Grade: B\n");
        break;
    case 7:
        printf("Grade: C\n");
        break;
    case 6:
        printf("Grade: D\n");
        break;
    case 5:
        printf("Grade: E\n");
        break;
    default:
        printf("Failed");
        break;
    }

    return 0;
}