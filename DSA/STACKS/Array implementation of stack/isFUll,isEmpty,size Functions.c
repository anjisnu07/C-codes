#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
void push(){
	if(top==MAX-1){
	printf("Stack overflow");
	return;
	}
	top=top+1;
	printf("Enter data in the stack");
	scanf("%d",&stack_arr[top]);
}
void pop(){
	int value;
	if(top==-1){
		printf("Stack underflow..");
		exit(1);
	}
	value=stack_arr[top];
	top=top-1;
	
}
void print(){
	int i;
	if(top==-1){
		printf("Stack is blank");
	}
	for(i=top;i>=0;i--){
		printf("%d ",stack_arr[i]);
	}
}
void isFull(){
	if(top==MAX-1){
		printf("Full");
	}
	else{
		printf("Not full,%d left",(MAX-1-top));
	}
}
void isEmpty(){
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		printf("Stack is not empty,%d elements are there.",top+1);
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.Push into array\n");
		printf("\n2.Pop from array\n");
		printf("\n3.Print element\n");
		printf("\n4.Stack is Full or not\n");
		printf("\n5.Empty or not.\n");
		printf("\n6.Exit\n");
		printf("\nChoose option:\n");
		scanf("%d",&n);
	switch(n){
	
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:print();
	break;
	case 4:isFull();
	break;
	case 5:isEmpty();
	break;	
	case 6:exit(0);
	break;	
     }
}
}
