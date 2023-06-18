#include<stdio.h>
#include<math.h>
int main(){
	long long int n,m;
	while(scanf("%lld%lld",&n,&m)!=-1){
		printf("%lld\n",labs(m-n));
	}
	return 0;
} 
