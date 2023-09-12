#include<stdio.h>
int Max(int a,int b,int c,int d);
int Min(int a,int b,int c,int d);
int main()
{
	int n1,n2,n3,n4,max,min;
	printf("Enter number1:");
	scanf("%i",&n1);
	printf("Enter number2:");
	scanf("%i",&n2);
	printf("Enter number3:");
	scanf("%i",&n3);
	printf("Enter number4:");
	scanf("%i",&n4);
    max=Max(n1,n2,n3,n4);
	min=Min(n1,n2,n3,n4);
	printf("the maximum number is %i",max);
	printf("\nthe minimum number is %i",min);	
}
int Max(int a,int b,int c,int d)
{
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				return a;
			else
				return d;
		}
		else if (c>d)
			return c;
		else 
			return d;
	}
	if(b>c)
		{
			if(b>d)
				return b;
			else
				return d;
		}
		else if (c>d)
			return c;
		else 
			return d;
    	
}
int Min(int a,int b,int c,int d)
{
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
				return a;
			else
				return d;
		}
		else if (c<d)
			return c;
		else 
			return d;
	}
	if(b<c)
		{
			if(b<d)
				return b;
			else
				return d;
		}
		else if (c<d)
			return c;
		else 
			return d;
}