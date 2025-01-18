#include <stdio.h>

int main() {
    int number, choice;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    while (1) {
        // Input number
        printf("Enter a number: ");
        scanf("%d", &number);

        // Count numbers
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        // Ask user to continue
        printf("Do you want to enter another number? (1/0): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;  // Exit loop
        }
    }

    // Display results
    printf("\n--- Number Count Summary ---\n");
    printf("Positive Numbers: %d\n", positiveCount);
    printf("Negative Numbers: %d\n", negativeCount);
    printf("Zero Numbers: %d\n", zeroCount);

    return 0;
}
