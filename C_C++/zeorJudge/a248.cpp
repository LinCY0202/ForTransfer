#include <stdio.h>	
int main(){
	int n=0,m=0,c=0;
	while(scanf("%d%d%d",&n,&m,&c)!=-1){
		printf("%d.",n/m);
		for(int i=0;i<c;i++){
			n=n%m;
			n=n*10;
			printf("%d",n/m);
		}
		printf("\n");
	}
	return 0;
} 
