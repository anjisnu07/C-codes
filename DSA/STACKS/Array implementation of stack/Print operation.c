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
int main(){
	int n;
	while(1){
		printf("\n1.Push into array\n");
		printf("\n2.Pop from array\n");
		printf("\n3.Print element\n");
		printf("\n4.Exit\n");
		printf("\nChoose option:\n");
		scanf("%d",&n);
	switch(n){
	
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:print();
	break;	
	case 4:exit(0);
	break;	
     }
}
}
