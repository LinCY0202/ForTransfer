#include<stdio.h>
int main(){
	int n=0,m=0;
	char a;
	scanf("%d %c %d",&n,&a,&m);
	
	if(a=='*'){
	printf("%d",n*m);
	}
	else if(a=='+'){
		printf("%d",n+m);
	}
	else if(a=='-'){
		printf("%d",n-m);
	}
	else{
		printf("%d",n/m);
	}
	
	return 0;
}
