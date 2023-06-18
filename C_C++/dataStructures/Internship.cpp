#include<stdio.h>
#include<string.h>
void print(int arr[],int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void insertion(int arr[],int size,int time){
	print(arr,size);//第一次 
	for(int i=1;i<time;i++){//time-1 第一次已經排好了 
			if(i<size){
				int key=arr[i];
				int k=i-1;
				while(k>=0&&arr[k]<key){
					arr[k+1]=arr[k];
					k--;
				}
				arr[k+1]=key;
			}

		print(arr,size);
	}
}
void bubble(int arr[],int size,int time){
	for(int i=0;i<time;i++){
		for(int j=size-1;j>i;j--){
			if(arr[j]>arr[j-1]){
				int tame=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tame;
			}
		}
		print(arr,size);
	}
}
void selection(int arr[],int size,int time){
	for(int i=0;i<time;i++){
		int max_index=i;
		for(int k=i+1;k<size;k++){
			if(arr[k]>arr[max_index]){
				max_index=k;
			}
		}
		if(i<size){
			int tame=arr[max_index];
			arr[max_index]=arr[i];
			arr[i]=tame;
		}
		print(arr,size);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int num[n];
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	int org[n];
	memcpy(org,num,sizeof(num));//copy num to org
	printf("1\n");
	insertion(num,n,m);
	
	memcpy(num,org,sizeof(org));
	printf("2\n");
	bubble(num,n,m);
	
	memcpy(num,org,sizeof(org));
	printf("3\n");
	selection(num,n,m);
	
	return 0;
}
