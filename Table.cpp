#include<stdio.h>
#include<conio.h>

int main(){
	int number, multiplier, result ;
	printf("Enter the Number: ");
	scanf("%d", &number);
	for (multiplier = 1; multiplier <11; multiplier++){
		result = number * multiplier ;
		printf("%d = %d * %d\n",result,number,multiplier);
	}
return 0;
}

