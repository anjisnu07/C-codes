#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node  *createNODE(){
	struct node *root;
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to add:");
	scanf("%d",&root->data);
	root->left=NULL;
	root->right=NULL;
}
int main(){
	struct node *root=createNODE();
	struct node *q =createNODE();
	struct node *r =createNODE();
	struct node *s =createNODE();
	struct node *t =createNODE();
	root->left=q;
	root->right=r;
	q->left=s;
	q->right=t;
	
}
