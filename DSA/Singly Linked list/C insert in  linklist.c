#include<stdio.h>
#include<stdlib.h>
struct node{
	int data_part;
	struct node *address;
};
struct node *start=NULL;
void insert()
{
	struct node *ptr,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Eneter the data you want:\n");
	scanf("%d",&temp->data_part);
	temp->address=NULL;   
	if(start==NULL)
	{
		start=temp;  
	}
	else
	{
		ptr=start;
		while(ptr->address!=NULL)
		{
			ptr=ptr->address;
		}
		ptr->address=temp;
	} // [5,2nd] 2nd[10,3rd] 3rd[56,NULL]  
}
int main()
{
	while(1)
	{
	insert();
	}
	exit(0);
	return 0;
}
