// Write a program to find the simple interest.
// The program should accept 3 inputs from the user and calculate simple interest for the given inputs.
// Formula: SI=(P*R*n)/100)

#include <stdio.h>

int main() {

    int principalAmount;
    float interestRate, years, simpleInt;

    printf("Enter the Principal Amount: ");
    scanf("%d", &principalAmount);

    printf("Enter rate of interest : ");
    scanf("%f", &interestRate);

    printf("Enter number of years : ");
    scanf("%f", &years);

    simpleInt = (principalAmount * interestRate * years)/100 ;
    
    printf("The Simple interest is: %.2f", simpleInt);

    return 0;
}