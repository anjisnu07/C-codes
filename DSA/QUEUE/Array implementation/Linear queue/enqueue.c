#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
int find=-1,bind=-1;
enqueue(){
	if(bind==0){
		printf("Empty queue");
	}
	bind=bind+1;
	printf("\nEnter to store data:");
	scanf("%d",&arr[bind]);
}
print(){
	int i;
	for(i=bind;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n;
	while(1){
		printf("\n1.Insert\n");
		printf("\n2.Print\n");
		printf("\n3.Choose option\n");
		scanf("%d",&n);
	 switch(n){
	 	case 1: enqueue();
	 	break;
	 	case 2:print();
	 	break;
	 }
		
	}
}
