#include<stdio.h>

int main ()
{
	int a,b,s,d,f,g,h;
	printf("please enter number a:");
	scanf("%i",&a);
	printf("please enter number b:");
	scanf("%i",&b);
	s=a+b;
	printf("a+b=%i \n",s);
	d=a-b;
	printf("a-b=%i \n",d);
	f=a&b;
	printf("a&b=%i \n",f);
	g=a|b;
	printf("a|b=%i \n",g);
	h=a^b;
	printf("a^b=%i",h);
	
}