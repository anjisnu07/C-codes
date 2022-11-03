#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
struct node *newnode(int data ){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=NULL;
	return ptr;
}
void insert_node_at_certain_pos(){
	int position;
	struct node *ptr=head;
	struct node *ptr2=(struct node *)malloc(sizeof(struct node));
	printf("Enter elements:\n");
	scanf("%d",&ptr2->data);
	printf("you inserted:%d\n",ptr2->data);
	ptr2->next=NULL;
	printf("Enter position where you want to add:");
	scanf("%d",&position);
	if(position==1){
		ptr2->next=ptr;
		head=ptr2;
		ptr=head;
	}
	else{
		position--;
	while(position !=1){
		ptr=ptr->next;
		position--;
	}
	ptr2->next=ptr->next;
	ptr->next=ptr2;
}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\nMemory not allocated for the task\n");
		return ;	
	}	
	printf("\nList of elements in the list are\n");
	while(ptr!=NULL)
	{                                                        
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	display();
	while(1){
	insert_node_at_certain_pos();
	display();
}
}
