#include<stdio.h>
int get_max(int a,int b);
 int main ()
 {
	 int num1,num2;
	 printf("please Enter number 1:");
	 scanf("%i",&num1);
	 printf("\nplease Enter number 2:");
	  scanf("%i",&num2);
	 int x= get_max(num1,num2);
	 printf("%i is bigger",x);
 }
 int get_max(int a,int b)
 {
	 if (a>b)
		 return(a);
	 else 
		 return(b);
		 
		
 }
 