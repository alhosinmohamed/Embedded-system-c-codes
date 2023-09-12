#include<stdio.h>
 
int main()
{
	int x ;
	printf("please enter your grade:");
	scanf("%i",&x);
	if (x<50)
		printf("your raiting is failed");
	else if (x>=85)
		printf("your raiting is excellent");
	else if(x>=75)
		printf("your raiting is very good");
	else if (x>=65)
		printf("your raiting is good");
	else if (x>=50)
		printf("your raiting is normal");
	
	
		
} 