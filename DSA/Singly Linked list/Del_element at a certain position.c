#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void insert_from_end(){
	struct node *ptr,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data you want to insert:\n");
	scanf("%d",&temp->data);
	printf("You inserted:%d\n",temp->data);
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
	ptr=(struct node *)malloc(sizeof(struct node));
		if(head==NULL){
		printf("Empty linklist.");
	}
	ptr=head;
	while(ptr !=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
del_At_certain_position(){
	int position;
	struct node *ptr=head;
	struct node *temp=head;
	
	if(head==NULL){
		printf("Empty linkedlist.");
	}
	
	else if(head->next==NULL){
		free(head);
		head=NULL;
	}
	else{
		
		while( position !=1){
			printf("Enter poition you want to delete: ");
	scanf("%d",&position);
			temp=ptr;
			ptr=ptr->next;
			position--;
		}
		temp->next=ptr->next;
		free(ptr);
		ptr=NULL;
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.Insert from end:\n");
		printf("\n2.Dislay\n");
		printf("\n3.del_At_certain_position\n");
		
		printf("\nChoose option:\n");
		scanf("%d",&n);
		switch(n){
		
		case 1:insert_from_end();
		break;
		case 2:display();
		break;
		case 3:del_At_certain_position();
		break;
	
}
}
}
