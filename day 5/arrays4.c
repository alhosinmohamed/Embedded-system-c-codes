#include<stdio.h>

int main ()
{
	int arr[10];
	int i,y;

	for( i=0;i<10;i++)
	{
		printf("Enter number %i:",i+1);
		scanf("%i",&arr[i]);
	}
	
	int max =arr[0];
	int min =arr[0];
	
	for( y=0;y<10;y++)
	{
		if (max < arr[y])
		{
		max =arr[y]	;
		}
		if (min> arr[y])
		{
		min =arr[y]	;
		}
		
	}
	
	printf("the max number is :%i",max);
	printf("\nthe min number is :%i",min);
}