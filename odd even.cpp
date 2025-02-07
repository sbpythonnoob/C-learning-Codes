#include<stdio.h>
#include<conio.h>

int main(){
	int Num;
	printf("Enter the number:");
	scanf("%d",&Num);
	
	if (Num % 2 == 0){
		printf("%d is even number",Num);}
	else {
		printf("%d is odd number",Num);
	}
	
return 0;
}

