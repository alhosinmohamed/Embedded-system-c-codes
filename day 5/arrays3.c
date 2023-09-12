#include<stdio.h>

int main ()
{
	int num[10],sum,i;
	float av;
    
	for(i=0;i<10;i++)
    {
	    printf("please Enter number %i:",i+1);
	    scanf("%i",&num[i]);
    }
	
    sum=0;
	
    for(int i=0;i<10;i++)
    {
        sum=sum+num[i];
    }
	
    printf("\nsum of array elements =%i",sum);
    av=sum/10.0000;
    printf("\naverage of array elements =%f",av);
}