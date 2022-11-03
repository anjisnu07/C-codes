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
int pop(){
	int value;
	if(top==-1){
		printf("Stack underflow..");
		exit(1);
	}
	value=stack_arr[top];
	top=top-1;
	return value;
}
int main(){
	int n;
	while(1){
		printf("\n1.Push into array\n");
		printf("\n2.Pop from array\n");
		printf("\n3.Exit\n");
		printf("\nChoose option:\n");
		scanf("%d",&n);
	switch(n){
	
	case 1:push();
	break;
	case 2:pop();
	break;	
	case 3:exit(0);
	break;	
     }
}
}
