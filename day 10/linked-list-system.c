#include<stdio.h>
#include"STD_TYPES.h"
#include<stdlib.h>
void add(s32 a);
void print(void);
void insert(s32 a,s32 b);
void delete(s32 a);
void search (s32 a);


 typedef struct node
 {
	 s32 data; 
	 struct node *next;
 }node;
 
 node *head=NULL; 
 node *tail=NULL; 
 
 
 
 int main()
 {
	 s32 x;
	do{
		printf("to add node enter 0");
		printf("\nto print the list enter 1");
		printf("\nto insert a noode enter 2");
		printf("\nto delete node enter 3");
		printf("\nto search for a data enter 4");
		printf("\nto exite enter 5");
		printf("\nyour choice:");
		scanf("%i",&x);
		switch (x)
		{
		case 0:
		printf("please enter the node data :");
		s32 a;
		scanf("%i",&a);
		add(a);
		break;
		case 1:
		print();
		break;
		case 2:
		printf("please enter the node data :");
		scanf("%i",&a);
		u32 b;
		printf("please enter the place :");
		scanf("%i",&b);
		insert(a,b);
		break;
		case 3:
		printf("please enter the place :");
		scanf("%i",&a);
		delete(a);
		break;
		case 4:
		printf("please enter the data :");
		scanf("%i",&a);
		search (a);
		break;
        case 5:
		break;
		default:
		printf("wrong choice\n");  
		}
	}while(x!=5);
	 printf("good bye");
 }
 
 
 
 
 
 
 void add(s32 a)
 {
	 if (head==NULL)
	 {
		node *ptr=(node*) malloc(sizeof(node));
		head=ptr;
		tail=ptr;
		ptr->next=NULL;
		ptr->data=a;
	 }
	 else
	 {
		node *ptr=(node*) malloc(sizeof(node));
	    ptr->next=NULL;
		ptr->data=a;
		tail->next=ptr;
		tail=ptr;
	 }
 }
 
 
 
 
 
 
 void print(void)
 {
	 if (head==NULL)
	 {
		printf("empty list\n");
	 }
	 else
	 {
		 node *mover;
		 mover=head;
		 s32 i=1;
		 while(mover!=NULL)
		 {
			printf("number %i is:%i\n",i,mover->data);
			mover=mover->next;
			i++;
		 }
	 }
 }
 
 
 
 
 
 
 void insert(s32 a,s32 b)
 {
 	 if (head==NULL)
	 {
		node *ptr=(node*) malloc(sizeof(node));
		head=ptr;
		tail=ptr;
		ptr->next=NULL;
		ptr->data=a;
	 }
	 else
	 {
		 node *mover;
		 mover=head;
		switch(b)
		{
			case 0:
			    node *ptr=(node*) malloc(sizeof(node));
				ptr->data=a;
				ptr->next=head;
				head=ptr;
			break;
			case 1:
			    ptr=(node*) malloc(sizeof(node));
				ptr->data=a;
				ptr->next=head;
				head=ptr;
			break;
			default:
		   	
	        for(s32 i=0;i<b-2;i++)
		    {
			    mover=mover->next;
				if (mover==tail)
					break;
            }
			if (mover==tail)
			{
			    node *ptr=(node*) malloc(sizeof(node));
	            ptr->next=NULL;
                ptr->data=a;
		        tail->next=ptr;
		        tail=ptr;	
			}
			else
			{
				node *ptr=(node*) malloc(sizeof(node));
				ptr->data=a;
				ptr->next=mover->next;
				mover->next=ptr;
				
			}
		}
	 }
 }
 
 
 
 
 
 
 void delete(s32 a)
  {
 	 if (head==NULL)
	 {
		printf("empty list\n"); 
	 }
	 else
	 {
		 node *mover;
		 mover=head;
		switch(a)
		{
			case 0:
			printf("there is no node number %i\n",a);\
			break;
			case 1:
			    if(head!=tail)
				{
			        head=mover->next;
				    free(mover);
				    mover=NULL;
				}
				else
				{
					free(head);
					head=NULL;
				}	
				
			break;
			default:
		   	
	        for(s32 i=0;i<a-2;i++)
		    {
			    mover=mover->next;
				if (mover->next==NULL)
					break;
            }
			if (mover==tail&&head!=tail)
			{
			 printf("there is no node number %i\n",a)	;
			}
			
			else if(head!=tail)
			{
			    node *mover2=mover->next;
				mover->next=mover2->next;
				free(mover2);
				mover=NULL;
				mover2=NULL;
			}
			else
            {
				free(head);
			    head=NULL;
		    }	
		}
	 }
 }
 
 
 
 
 void search (s32 a)
 {
	 if(head==NULL)
	 {
		printf("empty list\n");
	 }
	 else
	 {
		 s32 i=1;
		 node *mover;
		 mover=head;
		 while(1)
		 {
			if(mover->data==a)
			{
				printf("it is in node number:%i\n",i);
				break;
			}
			else if(mover==NULL)
			{
				printf("it is not in the list\n");
				break;
			}	
			mover=mover->next;
			i++; 
		 }
	 }
 }