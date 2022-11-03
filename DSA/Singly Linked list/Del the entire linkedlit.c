#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void insert(){
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data you wanna insert:\n");
	scanf("%d",&temp->data);
	printf("you inserted:%d\n",temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
}
}
void display(){
	struct node *ptr=head;
	if(head==NULL){
		printf("Empty linked-list");
	}
	else{
		while(ptr != NULL){
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void del_entire_linked_list(){
	if(head==NULL){
		printf("Empty linkedlist");
       }
	else{
		struct node *ptr;
		ptr=head;
		while(ptr!= NULL){
			ptr=ptr->next;
			free(head);
			head=ptr;
			
		}
		printf("Linked list deleted..");
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.insert\n");
		printf("\n2.Display\n");
		printf("\n3.Del entire linked list\n");
		printf("Choose option:\n");
		scanf("%d",&n);
	switch(n){
		case 1:insert();
		break;
		case 2: display();
		break;
		case 3:del_entire_linked_list();
		break;
	}
		
}
}
