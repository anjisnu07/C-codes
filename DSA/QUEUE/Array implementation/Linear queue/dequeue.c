#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
int front=-1,rear=-1;
void enqueue(){
	if(rear==max-1){
		printf("queue full");
		exit(1);
	}
	rear=rear+1;
	printf("\nEnter to store data:");
	scanf("%d",&arr[rear]);
			printf("		%d places left in queue		",max-rear-1);
}
void print(){
	int i;
	if(rear==-1 || front==rear){
		printf("Empty queue");
	}
	for(i=rear;i>=front+1;i--){
		printf("%d ",arr[i]);
	}
}

void dequeue(){

	front=front+1;

}


int main(){
	int n;
	while(1){
		printf("\n1.Insert\n");
		printf("\n2.Print\n");
		printf("\n3.Delete\n");
		printf("\nChoose option\n");	
		scanf("%d",&n);
	 switch(n){
	 	case 1: enqueue();
	 	break;
	 	case 2:print();
	 	break;
	 	case 3:dequeue();
	 	break;
	 }
		
	}
}
