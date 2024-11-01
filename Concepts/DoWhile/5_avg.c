// Write a C program that calculates the average of a set of numbers input by the user.
//  The user should be able to input as many numbers as desired, and the program should continue until
//   the user decides to stop
#include <stdio.h>
int main(){
    int i= 0, num;
    int sum = 0;
    float average;
    do{
        printf("Enter the integer: ");
        scanf("%d", &num);

        if(num != 0){
            sum += num;
            i++;
        }
    }while(num != 0);
        average = (float)sum/i;
        printf("Average is: %.1f", average);

    return 0;
}