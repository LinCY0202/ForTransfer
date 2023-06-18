#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int count=0;
	for(int i=1;i<=n;i++){
		int a=0;
		scanf("%d",&a);
		count+=a*i;
	}
	printf("%d",count);
	return 0;
} 
