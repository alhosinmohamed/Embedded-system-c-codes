#include <stdio.h>
 int main ()
 {
	 int x,y,i;
	 printf("Enter the number to diplay its multiplication table:");
	 scanf ("%i",&x);
	 for(i=1;i<=12;i++)
	 {
		 y=x*i;
		 printf ("%i*%i=%i\n",x,i,y);
	 }

	   
	
	 
 }