#include<stdio.h>

int main ()
{

	int class1[10],class2[10],class3[10];
	int faild,success,min,max,i,total;
	float ave;
	success=0;
	total=0;
	faild=0;
	max =0;
	min =100;
	for (i=0;i<10;i++)
	{
		printf("Enter student %i class 1:",i+1);
		scanf("%i",&class1[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("Enter student %i class 2:",i+1);
		scanf("%i",&class2[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("Enter student %i class 3:",i+1);
		scanf("%i",&class3[i]);
	}
	for (i=0;i<10;i++)
	{
		if(class1[i]>=50)
		{
			success++;
		}
		else
		{
			faild++;
		}
		if(class2[i]>=50)
		{
			success++;
		}
		else
		{
			faild++;
		}
		if(class3[i]>=50)
		{
			success++;
		}
		else
		{
			faild++;
		}
	    total=class1[i]+class2[i]+class3[i]+total;
	    	
   		if (max < class1[i])
		{
		max =class1[i]	;
		}
		
		if (min> class1[i])
		{
		min =class1[i]	;
		}
		
		if (max < class2[i])
		{
		max =class2[i]	;
		}
		
		if (min> class2[i])
		{
		min =class2[i]	;
		}
		
		if (max < class3[i])
		{
		max =class3[i]	;
		}
		
		if (min> class3[i])
		{
		min =class3[i]	;
		}
	}
	
	ave=total/30.0000;
	printf("number of passed students:%i",success);
	printf("\nnumber of faild students:%i",faild);	
	printf("\nthe average of grades:%f",ave);
    printf("\nthe highest grade:%i",max);
	printf("\nthe lowest grade:%i",min);
}