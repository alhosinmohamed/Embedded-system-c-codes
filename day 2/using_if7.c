#include<stdio.h>

int main ()
{
	int x,y,z ;
	printf("Enter number 1:");
	scanf("%i",&x);
	printf("\nEnter number 2:");
	scanf("%i",&y);
	printf("\nEnter number 3:");
	scanf("%i",&z);
	if(x>z)
	{
	if (x>y)
		printf("Maximim number is %i",x);
	else 
		printf("Maximim number is %i",y);	
	}
	else
	{
		if(z>y)
			printf("Maximim number is %i",z);  
		else
			printf("Maximim number is %i",y);
	}
	
}