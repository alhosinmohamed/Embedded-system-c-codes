#include<stdio.h>
#include"STD_TYPES.h"



int main ()
{
	typedef struct
	{
		u32 s;
		u32 b;
		u32 d;
	}emp;
	emp ahmed,amr,waleed;
	printf("please Enter ahmed salary:");
	scanf("%i",&ahmed.s); 
	printf("please Enter ahmed bonus:");
	scanf("%i",&ahmed.b); 
	printf("please Enter ahmed deduction:");
	scanf("%i",&ahmed.d); 
	printf("please Enter amr salary:");
	scanf("%i",&amr.s); 
	printf("please Enter amr bonus:");
	scanf("%i",&amr.b); 
	printf("please Enter amr deduction:");
	scanf("%i",&amr.d); 
	printf("please Enter waleed salary:");
	scanf("%i",&waleed.s); 
	printf("please Enter waleed bonus:");
	scanf("%i",&waleed.b); 
	printf("please Enter waleed deduction:");
	scanf("%i",&waleed.d); 
	u32 total= (ahmed.s+amr.s+waleed.s+ahmed.b+amr.b+waleed.b)-(ahmed.d+amr.d+waleed.d);
	printf("total is %i",total);	
}