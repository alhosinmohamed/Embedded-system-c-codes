#include<stdio.h>

int main ()
{
	int id ,pass;
	printf("Enter your ID:");
	scanf("%i",&id);
	if (id==1234)
	{
		printf("\nEnter your password:");
		scanf("%i",&pass);
		if (pass==5678)
			printf("\nwelcome hosin");
		else
			printf("\nIncorrect password");
			
	}
	else
		printf("\nIncorrect ID");
	
}