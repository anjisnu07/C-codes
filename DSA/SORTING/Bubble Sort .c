#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j,k,swap;
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
	
//	bubble sort function

		for(k=0;k<n-1;k++){                   
		for(j=0;j<n-1-k;j++){
			if(arr[j]>arr[j+1]){
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
	}

printf("\nArray Elements after performing bubble sort:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
