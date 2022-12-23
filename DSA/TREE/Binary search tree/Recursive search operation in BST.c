#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
struct node *left;
struct node *right;	
};

struct node *createnode(){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to insert:");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
}

void inorder(struct node *root){
	if(root != NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

struct node *search(struct node *p,int key){
	
	if(p==NULL){
		return NULL;
		}
	else if(p->data==key){
		return p;
		
	}
	 
	else if(key<p->data){
		return search(p->left,key);
	}
	else{
		return search(p->right,key);
	}
	
	
}





int main(){
	
	int key;
	
	struct node *p=createnode();
	struct node *q=createnode();
	struct node *r=createnode();
	struct node *s=createnode();
	struct node *t=createnode();
	struct node *u=createnode();
	
	p->left=q;
	p->right=r;
	
	q->left=s;
	q->right=t;
	
	r->left=u;
	
	 inorder(p);


	printf("\nEnter data you wanna search:\n");
		scanf("%d",&key);	 
	
	struct node *v=search(p,key);
	
	if(v != NULL){
		printf("%d Data found ",key);
	}
	else{
		printf("Data isn't in BST....'");
	}
	 
}
