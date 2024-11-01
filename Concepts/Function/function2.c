#include <stdio.h>

//with arg, without return value

void sum(int,int); 

void sum(int num1, int num2){
    int  sum;
    sum = num1 + num2;

    printf("Sum: %d \n" , sum );
}

int main(void) {

    int a,b;

    printf("Enter two numbers: "); 
    scanf("%d%d", &a, &b);

    sum(a,b); 
    return 0; 
}