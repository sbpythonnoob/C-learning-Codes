#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	double y, x, sum = 0;
	printf("Enter the value of x: ");
	scanf("%lf", &x);
	y = (x-1)/x;
	int n = 7;
	for(int i = 1; i<=n; i++){
	if ( i == 1){
		sum = y;
	}
	else{
		sum+=pow(y,i)/2;
	}
	}
	
	printf("The sum is: %lf", sum);
return 0;
	
	
}



