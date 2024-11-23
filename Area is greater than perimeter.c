# include <stdio.h>
# include <conio.h>
 int main(){
    float length, width, area, perimeter ;
    printf("Give me the length: ");
    scanf("%f", &length);
    printf("Give me the width: ");
    scanf("%f", &width);
    area = length * width ;
    perimeter = 2 * (length + width);
    if( area>perimeter){
        printf("The area is greater then perimeter");}
    else{
        printf("The area is not greater than perimeter");
    }
    return 0;

 }
 
