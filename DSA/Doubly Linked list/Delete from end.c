#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head;
void insert(){
	struct node *ptr,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("\nInsert data:\n");
	scanf("%d",&temp->data);
	printf("\nYou Inserted data\n");
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
		temp->prev=ptr;
	}
}
void display(){
	if(head==NULL){
		printf("Blank");
	}
	else{
	struct node *prt=head;
	while(prt !=NULL){
	printf("%d ",prt->data);
	prt=prt->next;
}
}
}
void del_end(){
	struct node *ptr,*temp=head;
	if(head==NULL){
		printf("Blank");
	}
	else if(head->next==NULL){
		free(head);
		head=NULL;
	}
	else{
		ptr=head;
		while(ptr->next!=NULL){
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		free(ptr);
		ptr=NULL;
		
		
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.Insert\n");
		printf("\n2.Display\n");
		printf("\n3.Del\n");
		printf("\nChoose opt:\n");
		scanf("%d",&n);
		switch(n){
		
	case 1:	insert();
	break;	
	case 2:	 display();
	break;
	case 3:	 del_end();
	break;
	}
}
}
