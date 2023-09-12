#include<stdio.h>

int main()
{
	#define x 7
	#if x==5
	printf("ahmed");
	#elif x==6
	printf("mohamed");
	#else
	#error "wrong configration"	
	#endif	
}