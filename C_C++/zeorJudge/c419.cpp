#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			printf("_");
		}
		for(int j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
