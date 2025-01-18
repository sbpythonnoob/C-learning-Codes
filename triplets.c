#include <stdio.h>

int checkPythagoreanTriplet(int a, int b, int c) {
    return (a*a + b*b == c*c);
}

int main() {
    int a, b, c;
    
    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (checkPythagoreanTriplet(a, b, c)) {
        printf("%d, %d, %d is a Pythagorean Triplet!\n", a, b, c);
        printf("%d² + %d² = %d²\n", a, b, c);
    } else {
        printf("%d, %d, %d is NOT a Pythagorean Triplet.\n", a, b, c);
    }
    
    return 0;
}
