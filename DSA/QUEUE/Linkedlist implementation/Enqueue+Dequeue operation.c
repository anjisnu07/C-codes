#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;

void enqueue(){
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data to insert:\n");
	scanf("%d",&temp->data);
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
}
}

void display(){
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d  ",ptr->data);
		ptr=ptr->next;
	}
}
void dequeue(){
struct node *ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	ptr=NULL;
	
}
int main(){
	int n;
	while(1){
		printf("\n1.Insert in queue:\n");
		printf("\n2.Display\n");
		printf("\n3.Delete\n");
		printf("\n4.exit\n");
		printf("\nChoose option:\n");
		scanf("%d",&n);
		switch(n){
		
		case 1:enqueue();
		break;
		case 2:display();
		break;
		case 3:dequeue();
		break;
		case 4:exit(0);
		break;
		
}
}
}

