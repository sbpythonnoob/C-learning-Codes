# include <stdio.h>
# include <conio.h>
# include <math.h>

int main(){
    float length, width, side, base, radius, height ;
    float square_area, rectangle_area, triangle_area, circle_area ;
    printf("Give me the side:");
    scanf("%f", &side);
    square_area = side * side ;
    printf("The area of the square is: %f \n", square_area);
    printf("Give me the length:");
    scanf("%f", &length);
    printf("Give me the width:");
    scanf("%f", &width);
    rectangle_area = length * width ;
    printf("The Area of the rectangle is: %f \n", rectangle_area);
    printf("Give me the base:");
    scanf("%f", &base);
    printf("Give me the height:");
    scanf("%f", &height);
    triangle_area = 0.5 * base * height ;
    printf("The area of the triangle is: %f \n", triangle_area);
    printf("Give me the radius:");
    scanf("%f", &radius);
    circle_area = 4 * M_PI * radius * radius ;
    printf("The area of the circle is: %f", circle_area);


return 0;
}
