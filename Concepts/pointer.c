#include <stdio.h>

int main() {
    int x = 10;
    int *p; // Declare a pointer to an integer

    p = &x; // Assign the address of x to the pointer p

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p (address of x): %p\n", p);
    printf("Value stored at the address pointed by p: %d\n", *p);

    *p = 20; // Modify the value at the address pointed by p

    printf("Modified value of x: %d\n", x);

    return 0;
}