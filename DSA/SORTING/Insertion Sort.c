#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j,k,swap,key;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int arr[n];
	
	printf("\nEnter array Elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray Elements before sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
// Insertion sort	
	for(j=1;j<=n-1;j++){
		
		key=arr[j];
		k=j-1;
		
		while(k>=0 && arr[k]>=key){
			arr[k+1]=arr[k];
			k--;
		}
		arr[k+1]=key;
		
	}
	
printf("\nArray Elements after performing bubble sort:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
