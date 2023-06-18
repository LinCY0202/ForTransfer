#include<stdio.h>
int data[15000001]={0};

void swap(int *n,int *m){
	int tame=*n;
	*n=*m;
	*m=tame; 
}
int tribleN(int k){\
	if(k>15000000){
		if(k&1)
			return 1+tribleN(3*k+1);
		else
			return 1+tribleN(k/2);
	}
	else if(data[k]!=0)
		return 1+data[k];
	else if(k&1){
		data[k]=tribleN(3*k+1);
		return 1+tribleN(3*k+1);
	}
	else{
		data[k]=tribleN(k/2);
		return 1+tribleN(k/2);
	}	
}
int main(){
	data[1]=1;
	int n,m;

	while(scanf("%d%d",&n,&m)!=-1){
		int N=n,M=m;
		int count;
		if(n>m)
			swap(&n,&m);
		int max=-1;
		for(int i=n;i<=m;i++){
			count=tribleN(i);
			if(max<count)
				max=count;		
		}
		printf("%d %d %d\n",N,M,max-1);
	}
	return 0;
}
