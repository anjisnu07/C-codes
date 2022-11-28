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
void preorder(struct node *root){
	
	if(root !=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

void inorder(struct node *root){
	if(root != NULL){
		inorder(root->left);
	    printf("%d ",root->data);
	    inorder(root->right);
	}
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
//	switch case
	int n;
	while(1){
		printf("\n1.Preorder\n");
		printf("\n2.Postorder\n");
		printf("\n3.Inorder\n");
		printf("\nChoose option:\n");
		scanf("%d",&n);
		switch(n){
			case 1: preorder(root);
			break;
			case 2: postorder(root);
			break;
			case 3: inorder(root);
			break;
		}
		
	}
	
}
