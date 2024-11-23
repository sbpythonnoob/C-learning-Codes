#include <stdio.h>
#include <conio.h>
#include<math.h>

int main(){
    float F, C ; //F = Temp in Ferenheit C = temp in celsius
    printf("Give me the celsius temp: ");
    scanf("%f",&C);
    F = (C * 1.8)+ 32; //Calculate Celsius to Ferenheit where 9/5 = 1.8
    printf("The Temp in Ferenheit will be: %F",F);
    return 0;

}

