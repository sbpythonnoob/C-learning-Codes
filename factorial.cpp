#include<stdio.h>
#include<conio.h>

int main(){
	int n,i;
	unsigned long long factorial = 1;
	printf("Enter the number:");
	scanf("%d", &n);
	
	if(n<0){
		printf("The number is not validate");
	return 1;
	
	}
	for(i=1; i<=n; i++){
	factorial *= i;
	}
	
	printf("Factorial of %d = %llu\n",n, factorial);
	
	return 0;

	
	
	}
