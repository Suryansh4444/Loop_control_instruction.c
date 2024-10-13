#include <stdio.h>

int main() {
    int i = 5;
    
    // Demonstrate i++
    printf("Initial value of i: %d\n", i);
    printf("Using i++:\n");
    printf("Value before increment: %d\n", i++);
    printf("Value after increment: %d\n", i);
    
    // Reset i to 5 for the next demonstration
    i = 5;
    
    // Demonstrate ++i
    printf("\nReset value of i: %d\n", i);
    printf("Using ++i:\n");
    printf("Value before increment: %d\n", ++i);
    printf("Value after increment: %d\n", i);

    return 0;
}
