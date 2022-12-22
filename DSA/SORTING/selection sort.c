#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,data,i,j,temp,indexofmin;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter array inputs:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray before sorting:\n");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
// selection sort

for(data=0;data<n-1;data++){
	
	indexofmin=data;
	
	for(j=data+1;j<n;j++){
		if(arr[j]<arr[indexofmin]){
			
			indexofmin=j;
			
		}
	}
	
	temp=arr[data];
	arr[data]=arr[indexofmin];
	arr[indexofmin]=temp;
}

printf("\nArray after sorting:\n");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
}
