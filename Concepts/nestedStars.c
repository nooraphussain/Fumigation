#include <stdio.h>

int main(){
    //square
    int i,j;
    for(i=1; i<6;i++){
        for(j=5; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //square
    for(i=0; i<5;i++){
        for(j=1; j<6; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //L triangle
    for(i=1; i<6;i++){
        for(j=0; j<i; j++){
            printf("* ");
        } 
        printf("\n");
    }
    printf("\n"); 
    
    //L triangle upside down
    for(i=0; i<6; i++){
        for(j=5; j>i; j--){
            printf("* ");
        } 
        printf("\n");
    }
    printf("\n"); 

    //right to left L triangle
    for(i=0; i<6; i++){
        for(j=i; j<=5; j++){
            printf(" ");
        } 
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n"); 

    // Print the top half of the diamond
  
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    // Print the bottom half of the diamond
    for (i = 5 - 1; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    

    return 0; 
}