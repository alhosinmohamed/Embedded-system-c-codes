#include<stdio.h>

int main ()
{
	int x;
	printf("please enter your ID:");
	scanf("%i",&x);
	switch (x)
	{
		case 1234: printf("welcome ahmed "); break;
		case 5678 : printf("welcome Youssef "); break;
		case 1145: printf("welcome Mina ");break;
		default : printf("wrong ID");break;
	}
	
	
}