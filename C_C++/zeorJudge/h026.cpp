#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int m=0;
	scanf("%d",&m);
	int a=0;
	int i=0;
	int count=0;
	for(;i<m;i++){
		scanf("%d",&a);
		printf("%d ",n);
		//平手次數 
		if(n==0){
			if(a==0){
				count++;
			}
			else if(a==2){
				printf(": Won at round %d",i+1);
				break;
			}
			else{
				printf(": Lost at round %d",i+1);
				break;
			}
		}
		else if(n==2){
			if(a==0){
				printf(": Lost at round %d",i+1);
				break;
			}
			else if(a==2){
				count++;
			}
			else{
				printf(": Won at round %d",i+1);
				break;
			}
		}
		else{
			if(a==0){
				printf(": Won at round %d",i+1);
				break;
			}
			else if(a==2){
				printf(": Lost at round %d",i+1);
				break;
			}
			else{
				count++;
			}
		}
		if(count==2){
			count=0;
			if(a==0){
				n=5;
			}
			else if(a==2){
				n=0;
			}
			else{
				n=2;
			}
		}
	}
	if(i==m){
		printf(": Drew at round %d",i);
	}
	return 0;
} 
