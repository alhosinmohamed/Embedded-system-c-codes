#include<stdio.h>


int Sum (int x,int y,int *a,int *b);

int main () 
{
	int a,b,sum1,sum2;
	printf("Enter number 1:");
	scanf("%i",&a);
	printf("Enter number 2:");
	scanf("%i",&b);
	Sum(a,b,&sum1,&sum2);
	printf("the summation is %i",sum1);
	printf("\nthe substraction is %i",sum2);
} 


void Sum (int x,int y,int *a,int *b)
{
	*a=x+y;
	*b=x-y;
}