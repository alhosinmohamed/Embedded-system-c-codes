#include <stdio.h>


int main ()
{
	int x;
	printf("Enter the answer of 3*4 :");
	scanf("%i",&x);
	while (x!=12)
	{
	    printf("\n not correct\n");
		printf("please try again:");
		scanf("%i",&x);
		  
	}
	printf("\n thank you"); 
}