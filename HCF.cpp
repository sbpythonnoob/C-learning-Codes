#include<stdio.h>
#include<conio.h> 


int hcf(int a, int b){
	while (b !=0){
		int temp = b;
		b = a % b;
		a  = temp;
	}
	return a;
}

int lcm(int a, int b){
	return (a*b)/hcf(a,b);
}

int main(){
	int num1, num2 ;
	printf("Give two numbers:" );
	scanf("%d %d", &num1, &num2);
	int Calculate_HCF = hcf(num1,num2);
	int Calculate_LCM = lcm(num1,num2);
	printf("HCF = %d\n",Calculate_HCF );
	printf("LCM = %d\n",Calculate_LCM );
	
return 0;
}

