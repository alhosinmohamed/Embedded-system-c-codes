#include <stdio.h>



int main()
{
	int x;
	float y;
	int z;
	printf("enter 10 numbers\n");
	for(int i=1; i<=10; i++)
	{
		printf("\n number %i=",i);
		scanf("%i",&x);
		z=z+x;
    }
	printf("\n the sum of the numbers is %i",z);
	y=z/10.0;
	printf("\n the average of the numbers is %f",y); 
}