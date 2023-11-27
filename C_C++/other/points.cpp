#include<stdio.h>
#include<stdlib.h>
void theArray(int **arr,int size){
	*arr=(int*)malloc(size*sizeof(int));
	if(*arr!=NULL){
		for(int i=0;i<size;i++){
			scanf("%d",&*(*arr+i));
		}
	}
}
void print(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int size;
	scanf("%d",&size);
	int *vector=NULL;
	theArray(&vector,size);
	print(vector,size);
	free(vector);
	return 0;
} 
