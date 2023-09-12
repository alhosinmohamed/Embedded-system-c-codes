#include<stdio.h>

int main()
{
	int x,i,y;
	printf("please Enter the pyramid height:");
	scanf("%i",&x);
	for(i=1;i<=x;i++)
	{
		for(y=1;y<x-(i-1);y++)
		{
			printf(" ");	
		}
		for(y=1;y<=(2*(i-1))+1;y++)
		{
	    	printf("*");
		}
		printf("\n");
	}	
}