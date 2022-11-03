#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void insert_beg(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL){
	printf("Stack oveflow");
	exit(1);
}
printf("\nEnter a data you want to add:\n");
scanf("%d",&temp->data);
printf("\nYour data inserted.");
temp->next=NULL;
if(top==NULL){
	top=temp;
}
else{
	temp->next=top;
	top=temp;
}
}
void display(){
	struct node *ptr;
	if(top==NULL){
		printf("Empty linkedlist");
	}
	else{
		ptr=top;
		while(ptr !=NULL){
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void del_beg(){
	if(top==0){
		printf("Stack underflow");
	}
	struct node *ptr=top;
	int value=ptr->data;
	top=ptr->next;
	free(ptr);
	ptr=NULL;
}
void isEmpty(){
	if(top==NULL){
		printf("\nList is empty\n");
	}
	else{
		printf("\nList is not empty\n");
	}
}
void peak(){
	if(top==NULL){
		printf("Empty");
	}
	else{
		printf("Peak value or top value is,%d",top->data);
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.PUSH\n");
		printf("\n2.Print\n");
		printf("\n3.POP\n");
		printf("\n4.check if its empty or not\n");
		printf("\n5.Check Last added element\n");
		printf("\n6.exit\n");
		printf("\nChoose option\n");
		scanf("%d",&n);
		switch(n){
			case 1:insert_beg();
			break;
			case 2:display();
			break;
			case 3:del_beg();
			break;
			case 4:isEmpty();
			break;
			case 5:peak();
			break;
			case 6:exit(0);
			
			
		}
		
	}
}

