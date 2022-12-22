#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;



void bst(){
	
	struct node *temp,*ptr,*ptr2;
	ptr=root;
	ptr2=root;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data to insert:\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL){
		root=temp;
	}
	else if(ptr->data>temp->data){
		while(ptr->left != NULL){
			ptr=ptr->left;
		}
		ptr->left=temp;
	}
	else if(ptr2->data<temp->data){
		while(ptr2->right  != NULL){
			ptr2=ptr2->right;
		}
		ptr2->right=temp;
	}
	else{
		printf("\nDuplicate element is not allowed\n");
		exit(1);
	}
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
int main(){
	while(1){
		int n;
		printf("\n1.insert nodes in BST:\n");
		printf("\n2.Inorder\n");
		printf("Enter option:");
		scanf("%d",&n);
		switch(n){
			case 1: bst();
			break;
			case 2: inorder(root);
			break;
		}
	}
}
