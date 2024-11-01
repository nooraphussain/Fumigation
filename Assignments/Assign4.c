// Write a program to check whether a student has passed or failed in a subject 
//after he or she enters their mark (pass mark for a subject is 50 out of 100).
// The program should accept input from the user and output a message as “Passed” or “Failed.”

#include <stdio.h>

int main() {

    float mark;

    printf("Enter your mark: ");
    scanf("%f", &mark);

    if(mark<0 || mark > 100){
        printf("Invalid mark");
    }else if(mark>= 50){
        printf("Passed");
    }else{
        printf("Failed");
    }

    return 0;
}