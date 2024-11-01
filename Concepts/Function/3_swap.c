// 3. Write a program in C to swap two numbers using a function.
// Test Data :
// Input 1st number : 2
// Input 2nd number : 4
// Expected Output :
// Before swapping: n1 = 2, n2 = 4                                                  
// After swapping: n1 = 4, n2 = 2 

#include <stdio.h>
void swap(int, int);
void swap(int num1, int num2){
    int a, b;

    a = num2;
    b = num1;

    printf("After swapping :\nFirst number: %d\nSecond numer: %d", a,b);
}

int main(void){
    int x,y;

    printf("Input 1st number :");
    scanf("%d", &x);
    
    printf("Input 2nd number :");
    scanf("%d", &y);

    swap(x,y);

    return 0;
}