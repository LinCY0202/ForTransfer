#include<stdio.h>
int add(int n){
	int k=0;
	(n!=0)&&(k=(n+add(n-1)));
	return k;
	
}
int main(){
	int n=0,count=0;
	scanf("%d",&n);
	count=n+add(n-1);
	printf("%d",count);
	return 0;
} 
