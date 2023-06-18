#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int num[50001];
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int k=-1;
	int m=-1;
	for(int i=0;i<n;i++){
		if(num[i]==i){
			count++;
		}
		else if(num[i]!=-1){
			count++;
			for(int j=i;num[j]!=-1;m=j){
				k=j;
				j=num[j];
				num[k]=-1;
				
//				for(int l=0;l<n;l++){
//					printf("%d ",num[l]);
//				}
			}
			num[m]=-1;
		}
	}
	printf("%d",count);
	return 0;
} 
