#include <stdio.h>

int main() {
    int i = 10;
    
    // Demonstrate i--
    printf("Initial value of i: %d\n", i);
    printf("Using i--:\n");
    printf("Value before decrement: %d\n", i--);
    printf("Value after decrement: %d\n", i);
    
    // Reset i to 10 for the next demonstration
    i = 10;
    
    // Demonstrate --i
    printf("\nReset value of i: %d\n", i);
    printf("Using --i:\n");
    printf("Value before decrement: %d\n", --i);
    printf("Value after decrement: %d\n", i);

    return 0;
}
