#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=5;
	head->next=NULL;
	
	struct node *tail=(struct node *)malloc(sizeof(struct node));
	tail->data=19;
	tail->next=NULL;
	head->next=tail;
	
	tail=(struct node *)malloc(sizeof(struct node));
	tail->data=100;
	tail->next=NULL;
	head->next->next=tail;
	return 0;
	
	
	
	
	
	
	
	
}
