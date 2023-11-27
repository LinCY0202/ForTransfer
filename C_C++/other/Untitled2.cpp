#include<stdio.h>
int replace(int *a,int len,int n){
	for(int i=0;i<len;i++){
		if(a[i]==n){
			return i;
		}
	}
}

int main(){
	printf("Enter the values of the array below?\nEnter the n value below?\n");

	int arr[6];
	int n=0;
	for(int i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&n);
	
	printf("Index of the value %d is %d\n",n,replace(arr,6,n));
}
