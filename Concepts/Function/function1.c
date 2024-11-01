#include <stdio.h>

//without arg,return value

void sum(); //declare

void sum(){ //define
    int num1,  num2, sum;

    printf("Enter two numbers: "); 
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %d \n" , sum );
}

int main(void) {
    sum(); //call
    sum();
    return 0;
}
 