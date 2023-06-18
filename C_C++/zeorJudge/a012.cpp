#include<stdio.h>
int main(){
	long long int a=0,b=0;
	while(scanf("%lld%lld",&a,&b)!=-1){
		if(a>b){
			printf("%lld\n",a-b);
		}
		else if(a==b){
			printf("0\n");
		}
		else{
			printf("%lld\n",b-a);
		}
	}
	return 0;
} 
