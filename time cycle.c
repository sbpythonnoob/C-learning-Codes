#include <stdio.h>

int printTimeSuffix(int hour) {
    if (hour == 0) {
        printf("12 midnight");
    } else if (hour == 12) {
        printf("12 noon");
    } else if (hour < 12) {
        printf("%d AM", hour);
    } else {
        printf("%d PM", hour - 12);
    }
    return 0;
}

int printFullDayCycle() {
    printf("24-Hour Time Display:\n");
    printf("-------------------\n");

    for (int hour = 0; hour < 24; hour++) {
        printf("%02d:00 - ", hour);
        printTimeSuffix(hour);
        printf("\n");
    }
    return 0;
}

int main() {
    printFullDayCycle();
    return 0;
}
