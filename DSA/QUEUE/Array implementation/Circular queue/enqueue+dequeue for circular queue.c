#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
int front=0,rear=0;
void enqueue(){
	if((rear+1)%max==front){
		printf("queue full");
		exit(1);
	}
	rear=(rear+1)%max;
	printf("\nEnter to store data:");
	scanf("%d",&arr[rear]);
}
void print(){
	int i;
	if(rear==0 || front==rear){
		printf("Empty queue");
	}
	for(i=rear;i>=front+1;i--){
		printf("%d ",arr[i]);
	}
}

void dequeue(){
    if(rear==0 || front==rear){
		printf("Empty queue");
	}
	front=(front+1)%max;

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
