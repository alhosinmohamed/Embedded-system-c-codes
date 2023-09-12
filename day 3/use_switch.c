#include<stdio.h>

int main()
{
	int x,y,i ;
	printf("please Enter your id:");
	scanf("%i",&x);
	switch(x)
	{
		case 1212:
		printf("please Enter your password:");
		scanf("%i",&y);
		if (y!=1212)
		{
			for(i=1;i<3&&y!=1212;i++)
			{
				printf("try again:");
		        scanf("%i",&y);
			}
			if (i==3)
				printf("Incorrect password for 3 times. no more tries");
			if (y==1212)
				printf("welcome ahmed");
				
		}
		else
		printf("welcome ahmed");
		break;
		case 3434:
		printf("please Enter your password:");
		scanf("%i",&y);
		if (y!=3434)
		{
			for(int i=1;i<3&&y!=3434;i++)
			{
				printf("try again:");
		        scanf("%i",&y);
			}
			if (i==3)
				printf("Incorrect password for 3 times. no more tries");
			if (y==3434)
				printf("welcome amr");
				
		}
		else
		printf("welcome amr");
		break;
		case 5656:
		printf("please Enter your password:");
		scanf("%i",&y);
		if (y!=5656)
		{
			for(int i=1;i<3&&y!=5656;i++)
			{
				printf("try again:");
		        scanf("%i",&y);
			}
			if (i==3)
				printf("Incorrect password for 3 times. no more tries");
			if (y==5656)
				printf("welcome wael");
				
		}
		else
			printf("welcome wael");
		break;
		default:
		printf("you are not registered");
	}
}
