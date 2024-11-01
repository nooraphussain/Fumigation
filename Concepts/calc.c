#include <stdio.h>

int main() {

    int num1,  num2, sum, diff, product;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2; 

    printf("Sum: %d \n" , sum );
    printf("Difference: %d \n" , diff);
    printf("Product: %d \n\n" , product);

    float number1,  number2, number3, average;

    printf("Enter three numbers: ");
    scanf("%f%f%f", &number1, &number2, &number3);

    average = (number1 + number2 + number3) / 3;

    printf("Average: %f \n\n" , average );

    return 0;
}