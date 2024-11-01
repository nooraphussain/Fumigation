#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("negative number \n");
    } else if (num == 0) {
        printf("zero \n");
    } else {
        printf("positive number \n");
    }

    //comparison

    int num1, num2;
    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Greater number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("Greater number is: %d\n", num2);
    } else {
        printf("Both the numbers are equal \n");
    }


    //multiple choice

    int number1, number2, choice;

    printf("Enter two numbers: \n");
    scanf("%d%d", &number1, &number2);

    printf("Enter \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Sum: %d\n", number1 + number2);
    } else if (choice == 2) {
        printf("Difference: %d\n", number1 - number2);
    } else if (choice == 3) {
        printf("Product: %d\n", number1 * number2);
    } else if (choice == 4) {
        if (number2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("Quotient: %.2f\n", (float)number1 / number2);
        }
    } else {
        printf("Invalid input\n");
    }

    //switch

    int day;

    printf("Enter a number (1-7) representing a day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid day number\n");
    }

    return 0;
}
