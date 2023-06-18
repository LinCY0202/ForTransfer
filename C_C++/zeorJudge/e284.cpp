#include<stdio.h>
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1){
		if(n==0){
			printf("No\n");
		}
		while(n>0){
			if(n==1){
				printf("Yes\n");
			}
			else if(n%2==1){
				printf("No\n");
				break;
			}
			
			n/=2;
		}
	}	
	return 0;
} 
