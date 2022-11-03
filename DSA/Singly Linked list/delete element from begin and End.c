#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void insert_begin(){
    
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter elements to add:\n");
    scanf("%d",&ptr->data);
    printf("You inserted:%d\n",ptr->data);
    ptr->next=NULL;
    ptr->next=head;
    head=ptr;
    while(ptr->next!=NULL){
    	ptr=ptr->next;
	}
}
	void display(struct node *head){
	if(head==NULL){
		printf("Empty linkedlist");
	}
	struct node *ptr=NULL;
	ptr=head;
	printf("Elements are:");
	while(ptr !=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
void del_from_front(){
	if(head==NULL){
		printf("Linkedlist is empty");
	}
	else{
		struct node *ptr=head;
		head=head->next;
		free(ptr);
		ptr=NULL;
	}
}

void del_from_end(){
	if(head==NULL){
		printf("blank linkedlist.");
	}
	else if(head->next==NULL){
		free(head);
		head=NULL;
	}
	else{
	  struct node *ptr=head;
	  struct node *temp=head;
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
		printf("\n1.insert\n");
		printf("\n2.Display\n");
		printf("\n3.Del from front:\n");
		printf("\n4.Del from end:\n");
		printf("Choose option:");
		scanf("%d",&n);
		switch(n){
			
			case 1: insert_begin();
			break;
			case 2: display(head);
			break;
			case 3: del_from_front();
			break;
			case 4: del_from_end();
			break;
		}
		
		
	}
}
