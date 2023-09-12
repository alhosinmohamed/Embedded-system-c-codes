#include<stdio.h>



int main()
{
	int x=10;
	int *ptr;
	ptr=&x;
	printf("x before is %i",x);
	*ptr=20;
	printf("\nx after is %i",x);
}