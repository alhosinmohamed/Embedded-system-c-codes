#include<stdio.h>
#include"STD_TYPES.h"

typedef struct
	{
		u32 s;
		u32 b;
		u32 d;
		u32 f;
	}std;
	
int main () {
	u8 id;
	std arr[10]=
	{
		{00,20,30,30},
		{10,20,30,40},
		{20,20,30,40},
		{30,20,30,40},
		{40,20,30,40},
		{50,20,30,40},
		{60,20,30,40},
		{70,20,30,40},
		{70,20,30,40},
		{80,20,30,40}	
	};
	
	printf("please Enter student ID:");
	scanf("%i",&id);
	
	if(id<10)
	{
        printf("\nmath grades:%i ",arr[id].s);
		printf("\nmath grades:%i",arr[id].b);
		printf("\nmath grades:%i",arr[id].d);
		printf("\nmath grades:%i",arr[id].f);
	}
    else
    {
	    printf("wrong ID");
    }
}