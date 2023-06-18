#include<stdio.h>
int main(){
	long long int a=0,b=0,c=0;
	while(scanf("%lld%lld%lld",&a,&b,&c)!=-1){

		if(a>b&&a>c){
			if(a>b+c){
				printf("A");
			}
			else if(b>c){
				printf("B");
			}
			else{
				printf("C");
			}
		}
		else if(b>a&&b>c){
			if(b>a+c){
				printf("B");
			}
			else if(a>c){
				printf("A");
			}
			else{
				printf("C");
			}
		}
		else{
			if(c>a+b){
				printf("C");
			}
			else if(a>b){
				printf("A");
			}
			else{
				printf("B");
			}
		}
		printf("\n");
	}	
	return 0;
}
