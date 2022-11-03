#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;

void insert_beg(int n){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL){
	printf("Stack oveflow");
	exit(1);
}
temp->data=n;
temp->next=NULL;
if(top==NULL){
	top=temp;
}
else{
	temp->next=top;
	top=temp;
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

void display(){
		struct node *ptr;
			if(top==NULL){
				printf("stack underflow");
			}
			else{
				ptr=top;
					while(ptr !=NULL){
						printf("%d ",ptr->data);
						ptr=ptr->next;
			
		
					}
		
			}
	

	}


void dectobin(int dec){
 		struct node *b;
 		b=(struct node *)malloc(sizeof(struct node));
 		b->data=dec;
				while(b->data!=0){
						insert_beg(b->data%2);
							b->data=b->data/2;
					}
}
void del(){
			struct node *ptr;
			ptr=top;
			while(ptr!= NULL){
			ptr=ptr->next;
			free(top);
			top=ptr;
	}
}
int main(){

	int dec;
	
	while(1){
		
		
			printf("\nEnter decimal value to convert:\n");
            scanf("%d",&dec);
			dectobin(dec);
			display();
			del();
	
			
			
		}
		
	}

