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
void display(){
	struct node *ptr=head;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(head==NULL){
		printf("Empty linkedlist");
	}
	else{
		while(ptr->next !=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;	
		}
			}
}
int main(){
	
	
	
	
}
