#include<stdio.h>
int Add(int a,int b);
int Subtract(int a,int b);
int Multiply(int a,int b);
int Divide(int a,int b);
int And(int a,int b);
int Or(int a,int b);
int Not(int a);
int Xor(int a,int b);
int Reminder(int a,int b);
int Increment(int a);
int Decrement(int a);
int main()
{
	int id,n1,n2,result;
	printf("plsease choo``````````````````````````````````````se the operation ID:-\n1-Add\n2-subtract\n3-Multiply\n4-Divide\n5-And\n6-Or\n7-Not\n8-Xor\n9-Reminder\n10-Increment\n11-Decrement\n          ID:");
	scanf("%i",&id);
	switch(id)
	{
		case 1:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Add(n1,n2);
		printf("The result is :%i",result);
		break;
		case 2:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Subtract(n1,n2);
		printf("The result is :%i",result);
		break;
		case 3:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Multiply(n1,n2);
		printf("The result is :%i",result);
		break;
		case 4:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Divide(n1,n2);
		printf("The result is :%i",result);
		break;
		case 5:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=And(n1,n2);
		printf("The result is :%i",result);
		break;
		case 6:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Or(n1,n2);
		printf("The result is :%i",result);
		break;
		case 7:
		printf("Enter number:");
		scanf("%i",&n1);
		result=Not(n1);
		printf("The result is :%i",result);
		break;
		case 8:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter nu mber 2:");
		scanf("%i",&n2);
		result=Xor(n1,n2);
		printf("The result is :%i",result);
		break;
		case 9:
		printf("Enter number 1:");
		scanf("%i",&n1);
		printf("Enter number 2:");
		scanf("%i",&n2);
		result=Reminder(n1,n2);
		printf("The result is :%i",result);
		break;
		case 10:
		printf("Enter number 1:");
		scanf("%i",&n1);
		result=Increment(n1);
		printf("The result is :%i",result);
		break;
		case 11:
		printf("Enter number:");
		scanf("%i",&n1);
		result=Decrement(n1);
		printf("The result is :%i",result);
		break;
		default : 
		printf("Wrong ID");
		break;
	}
}
int Add(int a,int b)
{
	int y=a+b ;
	return y;
}
int Subtract(int a,int b)
{
	int y=a-b ;
	return y;
}
int Multiply(int a,int b)
{
	int y=a*b ;
	return y;
}
int Divide(int a,int b)
{
	int y=a/b ;
	return y;
}
int And(int a,int b)
{
	int y=a&b ;
	return y;
}
int Or(int a,int b)
{
	int y=a|b ;
	return y;
}
int Not(int a)
{
	int y=~a;
	return y;
}
int Xor(int a,int b)
{
	int y=a^b ;
	return y;
}
int Reminder(int a,int b)
{
	int y=a%b ;
	return y;
}
int Increment(int a)
{
	a++;
	return a;
}
int Decrement(int a)
{
	  a--;
	return a;
}