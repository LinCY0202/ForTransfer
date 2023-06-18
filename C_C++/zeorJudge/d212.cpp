#include<stdio.h>
int main(){
	long long int count[101]={0,1,2};
	for(int i=3;i<101;i++){
		count[i]=count[i-1]+count[i-2];
	} 
	int n=0;
	while(scanf("%d",&n)!=-1){
		printf("%lld\n",count[n]);
	}
	return 0;
} 
