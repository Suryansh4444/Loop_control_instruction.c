#include <stdio.h>

int main() {
    int i;

    // Using a for loop with a continue statement
    for (i = 1; i <= 10; i++) {
        // Skip the iteration if i is 5
        if (i == 5) {
            continue;
        }

        // Print the current value of i
        printf("%d\n", i);
    }

    printf("Loop finished.\n");

    return 0;
}
