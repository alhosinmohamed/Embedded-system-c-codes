#include<stdio.h>

int main()
{
	for (;;)
	{
	    int x;
        int z;
	    int y;
	    printf("please Enter a number 1:")	;
	    scanf("%i",&x);
	    printf("please Enter a number 2:");	
	    scanf("%i",&z);
	    y=x+z;
	    printf("%i+%i=%i\n",x,z,y);
	}
}