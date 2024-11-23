#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float p,r,t,f, com;  //p = principle amount r = rate of interest and t = time f = final amount
    printf("Give me the principle: ");
    scanf("%f", &p);
    printf("Give me the rate of interest: ");
    scanf("%f", &r);
    printf("Give me the time: ");
    scanf("%f", &t);
    f = (p * r * t)/100 ; //calculate the simple interest
    printf("The Simple interest will be: %f \n", f);
    com = (p*pow((1 + r/100),t)) - p; //calculate the compound interest
    printf("The compound interest will be: %f", com);
    return 0;
    


}
