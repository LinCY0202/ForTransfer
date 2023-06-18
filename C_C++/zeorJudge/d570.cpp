#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	while(n>0){
		printf("%d\n",n);
		n=n/10;
	}
	return 0;
} 
