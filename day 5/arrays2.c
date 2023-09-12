#include<stdio.h>

int main ()
{
	int num[10];
	
    for (int i=0;i<10;i++)
    {
	    printf("please Enter number %i:",i+1);
	    scanf("%i",&num[i]);
    }
	
    printf("the values reversed in order");
    
	for(int i=9;i>=0;i--)
    {
	    printf("\n%i",num[i]);
	
    }	
}