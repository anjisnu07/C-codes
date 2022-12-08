#include<stdio.h>



	
void merge(int arr[],int low,int mid,int high){

	int i,j,k,l;
	int arr2[100];
	
	i=low;
	j=mid+1;
	k=low;
	
	while(i<=mid && j<=high){
		
		if(arr[i]<arr[j]){
			arr2[k]=arr[i];
			i++;
			k++;
			
		}
		
		else{
			arr2[k]=arr[j];
			j++;
			k++;
		}
		
		
	}
	
	while(i<=mid){
		arr2[k]=arr[i];
		i++;
		k++;
	}
	
	while(j<=high){
		arr2[k]=arr[j];
		j++;
		k++;
	}
	
	
	for(l=low;l<=high;l++){
		arr[l]=arr2[l];
	}
}

void mergesort(int arr[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main(){
	int i;
	int A[6]={3,2,45,1,78,1};
	mergesort(A,0,5);
	
	for(i=0;i<6;i++){
		printf("%d ",A[i]);
	}
	
}
