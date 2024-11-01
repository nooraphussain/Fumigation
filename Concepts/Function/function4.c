#include <stdio.h>

//without arg, with return value

int sum();

int sum() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;

    return sum;
}

int main(void) {
    int result;

    // Call the sum function and assign the result to the result variable
    result = sum();

    printf("Sum: %d", result);
    return 0;
}