#include<stdio.h>



int main()
{
	int x=1,y=2,z=3;
	int *p=&x,*q=&y,*r=&z;
	printf("x,y,z=%i,%i,%i",x,y,z);
	printf("\np,q,r=%p,%p,%p",p,q,r);
	printf("\n*p,*q,*r=%i,%i,%i",*p,*q,*r);
    p=&z;
	q=&x;
	r=&y;
	printf("\nx,y,z=%i,%i,%i",x,y,z);
	printf("\np,q,r=%p,%p,%p",p,q,r);
	printf("\n*p,*q,*r=%i,%i,%i",*p,*q,*r);
}