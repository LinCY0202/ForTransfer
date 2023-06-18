#include<stdio.h>
int data[100001]={0};
int func(int n){
	if(n>100001){
		if(n&1)
			return 1+func(3*n+1);
		else
			return 1+func(n/2);
	}
	else if(data[n]!=0){
		return 1+data[n];
	}
	else if(n&1){
		data[n]=func(3*n+1);
		return 1+func(3*n+1);
	}
	else{
		data[n]=func(n/2);
		return 1+func(n/2);
	}
}
int main(){
	data[1]=1;
	int n;
	while(scanf("%d",&n)!=-1){
		int ans=func(n);	
		printf("%d\n",ans-1);
	}
	return 0;
}
