// //1. Write a program in C to show the simple structure of a function.
// Expected Output :
// The total is :  11  

//no arg, no retrnVal
// #include <stdio.h>
// void sum();
// void sum(){
//     int num1, num2, sum;
//     printf("Enter two integers: ");
//     scanf("%d%d", &num1, &num2);

//     sum = num1 + num2;
//     printf("The total is : %d", sum);
// }

// int main(void){
//     sum();
//     return 0;
// }

//with arg, no return value
#include <stdio.h>
void sum(int, int);
void sum(int num1, int num2){

    int sum;
    sum = num1 + num2;
    printf("The total is : %d", sum);
}

int main(void){

    int a,b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    sum(a,b);
    return 0;
}

