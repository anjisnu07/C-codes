#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head;
void insert_end(){
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
void insert_beg(){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("\nInsert data:\n");
	scanf("%d",&temp->data);
	printf("\nYou Inserted data\n");
	temp->next=NULL;
	temp->next=head;
	head=temp;
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
del_from_begin(){
	struct node *ptr=head;
	free(head);
	head=NULL;
	head=ptr->next;
	head->prev=NULL;
}
del_from_certain_pos(){
	struct node *ptr=head,*temp=NULL;
	int n;
	printf("\nEnter position you wanna delete:\n");
	scanf("%d",&n);
	if(n==1){
		del_from_begin();
	}
	else{
		
	while(n>1){
		temp=ptr;
		ptr=ptr->next;
		n--;
	}
	if(ptr->next==NULL){
		del_end();	
	}
	else{
	temp->next=ptr->next;
	ptr->next->prev=temp;
	free(ptr);
	ptr=NULL;
}
}
}
void insertpos()
{
	struct node *ptr,*temp,*ptr2;
	int pos;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the position you want to insert in:\n");
	scanf("%d",&pos);
	ptr=head;
	if(pos==1)
	{
		insert_beg();
	}
	else
	{
		while(pos>1){
			ptr2=ptr;
			ptr=ptr->next;
			pos--;
		}
		if(ptr->next==NULL){
			insert_end();
		}
		else{
		printf("\nEnter the data you want to insert:\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp->prev=NULL;
		
		temp->next=ptr;
		temp->prev=ptr2;
		ptr->prev=temp;
		ptr2->next=ptr;		
	}
}
}
void rev(){
	struct node *ptr,*temp;
	int i=0,count=0,t;
	ptr=head;
	while(ptr->next !=NULL){
		ptr=ptr->next;
		count++;
	}
	temp=head;
	while(i<((count/2)+1)){
		t=ptr->data;
		ptr->data=temp->data;
		temp->data=t;
		
		ptr=ptr->prev;
		temp=temp->next;
		i++;
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.Insert\n");
		printf("\n2.Display\n");
		printf("\n3.Del\n");
		printf("\n4.Del_from_beg\n");
		printf("\n5.Del_from_Certain_pos\n");
		printf("\n6.Insert from begining\n");
		printf("\n7.Insert at certain pos\n");
		printf("\n8.Rev\n");
		printf("\nChoose opt:\n");
		scanf("%d",&n);
		switch(n){
		
	case 1:	insert_end();
	break;	
	case 2:	 display();
	break;
	case 3:	 del_end();
	break;
	case 4:	 del_from_begin();
	break;
	case 5:	 del_from_certain_pos();
	break;
	case 6:	 insert_beg();
	break;
	case 7:	insertpos();
	break;
	case 8:	rev();
	break;
	
	}
}
}
