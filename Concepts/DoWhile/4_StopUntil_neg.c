//4. Write a C program that prompts the user to enter a series of numbers until they input a negative number.
// Calculate and print the sum of all entered numbers using a do-while loop.
#include <stdio.h>
int main(){
    int num, sum = 0;
    do{
        printf("Enter the integer: ");
        scanf("%d", &num);

        if(num>=0){
            sum += num;
        }
    }while(num>=0);
        printf("sum is: %d", sum);

    return 0;
}