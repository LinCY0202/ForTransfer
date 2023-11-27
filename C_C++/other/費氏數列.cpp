#include<stdio.h>
int main(){
	int n;
	printf("¶µ¼Æ:");
	scanf("%d",&n);
	int a1=0,a2=1;
	printf("1 ");
	for(int i=0;i<n-1;i++){
		printf("%d ",a1+a2);
		int tame=a1;
		a1=a2;
		a2=a2+tame;
	}
} 

