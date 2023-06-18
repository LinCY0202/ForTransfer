#include<stdio.h>
#include<math.h>
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1){
		if(n==0){
			break;
		}
		int t=sqrt(n);
		if(n==t*t){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
} 
