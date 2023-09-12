#include<stdio.h>

int main ()
{
	int a,s,d,f,g,h,j,k,l,z,x;
	printf("Enter number 1:");
	scanf("%i",&a);
	printf("\n Enter number 2:");
	scanf("%i",&s);
	printf("\n Enter number 3:");
	scanf("%i",&d);
	printf("\n Enter number 4:");
	scanf("%i",&f);
	printf("\n Enter number 5:");
	scanf("%i",&g);
	printf("\n Enter number 6:");
	scanf("%i",&h);
	printf("\n Enter number 7:");
	scanf("%i",&j);
	printf("\n Enter number 8:");
	scanf("%i",&k);
	printf("\n Enter number 9:");
	scanf("%i",&l);
	printf("\n Enter number 10:");
	scanf("%i",&z);
	printf("\n Enter the value to search:");
	scanf("%i",&x);
	if (x==a)
		printf("\n The value is exist at element number 1");
	else if (x==s)
		printf("\n The value is exist at element number 2");
	else if (x==d)
		printf("\n The value is exist at element number 3");
	else if (x==f)
		printf("\n The value is exist at element number 4");
	else if (x==g)
		printf("\n The value is exist at element number 5");
	else if (x==h)
		printf("\n The value is exist at element number 6");
	else if (x==j)
		printf("\n The value is exist at element number 7");
	else if (x==k)
		printf("\n The value is exist at element number 8");
	else if (x==l)
		printf("\n The value is exist at element number 9");
	else if (x==z)
		printf("\n The value is exist at element number 10");
	else
		printf("\n number no exist");
	
}