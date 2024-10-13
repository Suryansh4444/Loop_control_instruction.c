#include <stdio.h>

int main() {
    int i;

    // Using a for loop with a break statement
    for (i = 1; i <= 10; i++) {
        // Print the current value of i
        printf("%d\n", i);

        // Break the loop if i is 5
        if (i == 5) {
            break;
        }
    }

    printf("Loop exited.\n");

    return 0;
}
