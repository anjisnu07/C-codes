#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int data_part;
	struct node *next;
};
// [data,null]= node->address = NULL
struct node *start=NULL; // [NULL,NULL]
void insert()
{
	struct node *ptr,*temp;
	int data;
	temp=(struct node *)malloc(sizeof(struct node)); //temp [data,address]
	if(temp==NULL)
	{
		printf("\nMemory allocation failure\n");
		return;
	}
	printf("\nEnter the data you want to insert:\n");
	scanf("%d",&data);
	temp->data_part=data;// temp [11,add]
	temp->next=NULL;// 
	if(start==NULL)
	{
		start=temp; // start [10,NULL]
	}
    // 1st[10,2nd]  2nd[11,NULL]
	else
	{
		ptr=start;
		while(ptr->next!=NULL) // 1st[10,2nd] [11,3rd] [12,temp]  temp[13,NULL]
		{                                               //ptr
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display()
{
	struct node *ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("\nMemory not allocated for the task\n");
		return ;	
	}	
	printf("\nList of elements in the list are\n");
	while(ptr!=NULL) // 1st[10,2nd] [11,3rd] [12,temp]  temp[13,NULL] ...............
	{                                                        //ptr
		printf("%d\n",ptr->data_part);
		ptr=ptr->next;
	}
}
int main()
{
	while(1)
	{
		int ch;
		printf("\n1.Insert\n");
		printf("\n2.Display\n");
		printf("\n3.Exit\n");
		printf("\nEnter the option:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("\nExiting the code\n");
				exit(0);
				break;
			default:
				printf("\nWrong option taken\n");
				break;
		}
    }
    return 0;
}
