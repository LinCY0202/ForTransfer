#include<stdio.h>
long long int func(int n){
	long long int static  count=n;
	if(n==1)
		return count;
	else 
		return func(n-1)*n+count;
	
	
}

int main(){
	int n;
	scanf("%d",&n);
	printf("ans=%lld\n",func(n));
	
	
}
