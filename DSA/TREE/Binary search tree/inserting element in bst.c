#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
struct node *left;
struct node *right;	
};

struct node *createnode(int key){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->data=key;
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
	
while( p != NULL){

	
if(p->data==key){
	return key;
}
else if(key< p->data){
	p=p->left;
}
else{
	p=p->right;
}
	
	
}

return NULL;
}

struct node *insert(struct node *ptr,int key){
	struct node *prev=NULL;
	
	while(ptr != NULL){
		prev=ptr;
		
		if(key==ptr->data){
			return ptr;
		}
		else if(key<ptr->data){
			ptr=ptr->left;
		}
		else{
			ptr=ptr->right;
		}
	}
	
	struct node *create=createnode(key);
	
	if(key<prev->data){
		prev->left=create;
	}
	else{
		prev->right=create;
	}
	
	
	
	
	
}



int main(){
	
	int i=0;
	int n;
	int key;
	int root;
	printf("\nEnter root Data:\n");
	scanf("%d",&root);
	struct node *p=createnode(root);
	while(1){
	
	printf("\n1.Insert in BST\n");
	printf("\n2.Inorder traversal of BST\n");
	printf("\n3.Search for an number in BST\n");
	printf("\n4.Exit\n");
	
	printf("Choose option:");
	scanf("%d",&n);
	switch(n){
	    case 1: printf("\nEnter data you wanna search:\n");
				scanf("%d",&key);
				insert(p,key);
				break;
	    case 2: inorder(p);
	    		break;
	    
	    case 3: printf("\nEnter data you wanna search:\n");
				scanf("%d",&key);
				struct node *nas=search(p,key);
				if(nas != NULL){
					printf("\n %d Key is found GG\n",key);
				}
				else{
					printf("\nKey is not here\n");
				}
				break;
				
		case 4: exit(1);
}
}
//	struct node *p=createnode();
//	struct node *q=createnode();
//	struct node *r=createnode();
//	struct node *s=createnode();
//	struct node *t=createnode();
//	struct node *u=createnode();
	
//	p->left=q;
//	p->right=r;
//	
//	q->left=s;
//	q->right=t;
//	
//	r->left=u;
//	
	 

//
//	printf("\nEnter data you wanna search:\n");
//		scanf("%d",&key);	 
//	
//	struct node *v=search(p,key);
//	
//	if(v != NULL){
//		printf("%d Data found ",key);
//	}
//	else{
//		printf("Data isn't in BST.'");
//	}
	 
}
