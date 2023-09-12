#include<stdio.h>

int main()
{
	for (;;){
	int x;
    int z;
    int i;
    char f;	
	char y;
	printf("please Enter a number 1:")	;
	scanf("%i",&x);
	printf("please Enter a number 2:");	
	scanf("%i",&z);
	printf("\nplease Enter an operator:");
	scanf(" %c",&y);
    switch(y)
	{
	case'+':i=x+z;
	printf("%i+%i=%i",x,z,i);
	break;
	case'-':i=x-z;
	printf("%i-%i=%i",x,z,i);
	break;
	case'/':i=x/z;
	printf("%i/%i=%i",x,z,i);
	break;
	case'*':i=x*z;
	printf("%i*%i=%i",x,z,i);
	break;
	case'%':i=x%z;
	printf("%i % %i=%i",x,z,i);
	break;
	}
    printf("\nEnter x to continue or y to Exite\n");
	scanf(" %c",&f );
	if (f=='x')
	continue;
	else if(f=='y')
		break;
	}
}