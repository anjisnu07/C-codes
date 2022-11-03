#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
void insert_at_end(){
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("\nEnter data to insert:\n");
	scanf("%d",&temp->data);
	printf("\nYou inserted:%d\n",temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
	ptr=head;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
	temp->next=NULL;
}
}
void insert_at_certain_position(){
	struct node *temp,*ptr,*ptr2;
	int pos;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("\nEnter data to insert:\n");
	scanf("%d",&temp->data);
	printf("\nYou inserted:%d\n",temp->data);
	temp->next=NULL;
	printf("Enter position to insert:");
	scanf("%d",&pos);
    if(pos==1){
		temp->prev=NULL;
		temp->next=head->next;
		head=temp;
		
	}
	else{
		ptr=head;
	while(pos>1){
		ptr2=ptr;
		ptr=ptr->next;
		pos--;
		printf("ji");
	}
	temp->prev=ptr2;
	temp->next=ptr;
	ptr->prev=temp;
	ptr2->next=temp;
}
}
void display(){
	struct node *ptr;
	if(head==NULL){
		printf("Empty linked list.");
	}
	else{
           ptr=head;
		   while(ptr !=NULL){
		   	printf("%d ",ptr->data);
		   	ptr=ptr->next;
		   }		
	}
}
int main(){
	while(1){
		int n;
		printf("\n1.Insert from End.\n");
		printf("\n2.Display\n");
		printf("\n3.Insert at certain position.\n");
		printf("\nChoose option.\n");
		scanf("%d",&n);
		switch(n){
	case 1: insert_at_end();
	break;
	case 2: display();
	break;
	case 3: insert_at_certain_position();
	break;
	
}
}
}
