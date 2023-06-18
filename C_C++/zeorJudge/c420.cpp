#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int j=1;
	int x=n-1;
	for(int i=1;i<=n;i++){

		for(int k=1;k<=x;k++){
			printf("_");
		}
		for(int k=1;k<=j;k++){
			printf("*");
		}
		for(int k=1;k<=x;k++){
		printf("_");
		}
		j+=2;
		x--;
		printf("\n");
	}	
	return 0;
}
