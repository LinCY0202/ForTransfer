#include <stdio.h>	
int main(){
	int n=0;
	int m=0;
	int max=-1;
	int min=500;
	while(scanf("%d",&n)!=-1){
		if(n==1){
			scanf("%d",&m);
		}
		if(m>max){
			max=m;
		}
		if(m<min){
			min=m;
		}
		if(n==2){
			printf("%d\n",max);
		}
		if(n==3){
			printf("%d\n",min);
		}
	}
	return 0;
} 
