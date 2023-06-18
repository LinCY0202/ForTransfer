#include<stdio.h>
int main(){
	int k=0;
	scanf("%d",&k);
	int n=0,m=0;
	for(int i=0;i<k;i++){
		scanf("%d%d",&n,&m);
		printf("%d\n",(n/3)*(m/3));
	}

	

	return 0;
}
