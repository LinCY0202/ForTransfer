#include<stdio.h>
int main(){
	int n=0;
	int num[1000]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	} 
	int count=0;

	for(int i=0;i<n;i++){
		//printf("x ");
		if(num[i]==0){
			if(i==0){
				count+=num[i+1];
			}
			else if(i==n-1){
				count+=num[i-1];
			}
			else{
				if(num[i+1]>num[i-1]){
					count+=num[i-1];
				}
				else{
					count+=num[i+1];
				}
			}
			i++;
		}
	}
	printf("%d",count);
	return 0;
}
