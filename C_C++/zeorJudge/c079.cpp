#include<stdio.h>
int main(){
	int n=0,k=0;
	while(scanf("%d%d",&n,&k)!=-1){
		int count=n;
		while(n>=k){
			count+=n/k;
			int b=n%k;
			n=n/k+b;
		}
		printf("%d\n",count);
	}

	return 0;
} 
