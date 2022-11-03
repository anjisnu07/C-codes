#include<stdio.h>    
#include<stdlib.h>
struct node{
	int data_part;
	struct node* address;
};
struct node *start=NULL;



void Insert(){  
struct node *temp,*ptr;
int i;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the data you want:\n");
scanf("%d",&temp->data_part);
printf("Your data is:%d\n",temp->data_part);
temp->address=NULL;
if(start==NULL){
	start=temp;
}
else{
	ptr=start;
	while(ptr->address!=NULL){
		ptr=ptr->address;
		
	}
	ptr->address=temp;
	
}
}
int main() {

while(1){
	Insert();
}
return 0;  
} 
