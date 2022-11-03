#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void count_of_nodes(struct node *head){
	int count=0;
	if(head==NULL){
		printf("Empty linklist");
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL){
		count++;
	   ptr=ptr->next;
	}
	printf("%d",count);
}

int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->next=NULL;
	
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=79;
	ptr->next=NULL;
	head->next=ptr;
	
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=99;
    ptr->next=NULL;
    head->next->next=ptr;
    
    head->next->next=ptr;
    
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=1000;
    ptr->next=NULL;
    head->next->next->next=ptr;
    
    count_of_nodes(head);

}
