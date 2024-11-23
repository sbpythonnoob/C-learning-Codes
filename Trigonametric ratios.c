#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float angle_degrees, angle_radians;
    float sine, cosine, tangent;

   
    printf("Enter an angle in degrees: ");
    scanf("%f", &angle_degrees);

    
    angle_radians = angle_degrees * M_PI / 180.0;

    
    sine = sin(angle_radians);
    cosine = cos(angle_radians);
    tangent = tan(angle_radians);

    // Display the results
    printf("For an angle of %f degrees:\n", angle_degrees);
    printf("Sine: %f\n", sine);
    printf("Cosine: %f\n", cosine);
    printf("Tangent: %f\n", tangent);

    return 0;
}

