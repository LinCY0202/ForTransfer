#include<stdio.h>
int main(){
	long long int data[501]={0};
	long long int  sum[501]={0};
	data[1]=1;
	sum[1]=1;
	for(int i=2,j=1;i<501;i++){
		data[i]=data[i-1]+j*4;
		sum[i]=data[i]+sum[i-1];
		j*=3;
	}
	int n;
	while(scanf("%d",&n)!=-1){
		printf("%d\n%d\n",data[n],sum[n]);
			
	}
	return 0;
}
