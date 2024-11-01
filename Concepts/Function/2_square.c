// 2. Write a program in C to find the square of any number using the function.
// Test Data :
// Input any number for square : 20
// Expected Output :
// The square of 20 is : 400.00

//with arg and return value
#include <stdio.h>
int square(int);
int square(int num){

    int square = num * num;
    return square;
}

int main(void){
    int a,b;
    printf("Enter a integers: ");
    scanf("%d", &a);

    b = square(a);
    printf("The square of %d is : %d ", a,b);

    return 0;
}

