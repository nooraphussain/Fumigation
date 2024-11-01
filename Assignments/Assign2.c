//Accept two inputs from the user and output its sum.

#include <stdio.h>

int main() {

    int num1;
    float num2;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter a float number: ");
    scanf("%f", &num2);

    float sum = num1+num2;
    printf("Sum: %.2f", sum);
    
    return 0;
}