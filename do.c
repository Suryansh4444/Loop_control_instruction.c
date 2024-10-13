#include <stdio.h>

int main() {
    int number = 1; // Initialize the counter to 1

    // Use do-while loop to print numbers from 1 to 5
    do {
        printf("%d\n", number); // Print the current value of number
        number++; // Increment the number by 1
    } while (number <= 5); // Continue loop as long as number is less than or equal to 5

    return 0;
}
