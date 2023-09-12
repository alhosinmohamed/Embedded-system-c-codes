#include<stdlib.h>
#include<stdio.h>
#include"STD_TYPES.h"

void Bubble_sort(u16*ptr,u16 size);


int main ()
{ 
    u16 x;
 
    printf("Enter the number of numbers:");
	scanf("%i",&x);
	u16 *ptr =(u16*)malloc(x*sizeof(u16));
	
	for(u16 i=0;i<x;i++)
	{
		printf("Enter the number %i:",i+1);
	    scanf("%i",&ptr[i]); 
	}
	
	Bubble_sort(ptr,x);
	  
	for(u16 i=0;i<x;i++)
	{
		printf("\n%i",ptr[i]);
	}
}


void Bubble_sort(u16*ptr,u16 size)
{
	u16 i,j,z;
	
	for (i=0; i<size-1;i++)
	{
		for (j = 0; j < size-i-1; j++) 
		{
			if(ptr[j] > ptr[j+1])
			{
				z = ptr[j+1];
				ptr[j+1] = ptr[j];
				ptr[j] = z;
			}
		}
	}
}