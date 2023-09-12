#include<stdio.h>


int Sum (int *a,int *b);


int main () 
{
	int a,b,sum;
	printf("Enter number 1:");
	scanf("%i",&a);
	printf("Enter number 2:");
	scanf("%i",&b);
	sum= Sum(&a,&b);
	printf("the result is %i",sum);
} 


int Sum (int *a,int *b)
{
	int sum =*a+*b;
	return sum ;
}