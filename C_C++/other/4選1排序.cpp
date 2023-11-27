#include<stdio.h>
int arr[4];
int main(){
	for(int i=0;i<4;i++)//input
		scanf("%d",&arr[i]);
	for(int i=0;i<4;i++)//sort
		for(int j=0;j<4-1;j++){
			if(arr[j]>arr[j+1]){
				int tame=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tame;
			}
		}
	for(int i=0,count=1;i<4;i++)//output
		for(int j=0;j<4;j++)
			for(int k=0;k<4;k++)
				if(i!=j&&i!=k&&j!=k){
					printf("²Ä%d¶µ:\t%d%d%d\n",count,arr[i],arr[j],arr[k]);
					count++;
				}
	return 0;
}
