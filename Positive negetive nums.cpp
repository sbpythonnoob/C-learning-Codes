#include<stdio.h>
#include<conio.h>

int main(){
	int number, choice;
	int positivecount = 0, negetivecount = 0, zerocount = 0;
	
	while(1){
		printf("enter the number: ");
		scanf("%d", &number);
		
		if(number>0){
			positivecount++;
			
		}
		else if(number<0){
			negetivecount++;
		}
		else {
			zerocount++;
		}
		
	
	printf("Do you want to add another number?(1/0): " );
	scanf("%d",&choice);
	
	if (choice == 0){
			break;

	}
}
	printf("Postive Number %d\n", positivecount);
	printf("negetive Number %d\n", negetivecount);
	printf("zero Number %d\n", zerocount);
	return 0;
	

}

	

