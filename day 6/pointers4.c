#include<stdio.h>


int sort (int *ptr,int size);


int main ()
{
	int arr[10],i;
	printf("please Enter 10 numbers");
	
	for (i=0;i<10;i++)
	{
		scanf("%i",&arr[i]);
	}
	
	sort(arr,10);
	printf("the array after sorting:\n");
	
	for (i=0;i<10;i++)
	{
		printf("%i\n",arr[i]);
	}
}


int sort (int *ptr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int y=0;y<size -i-1;y++)
		{
			int z;
			
			if(ptr[y]>ptr[y+1])
			{
				z=ptr[y+1];
				ptr[y+1]=ptr[y];
				ptr[y]=z;
			}			
		}	     
	}
}
