#include<stdio.h>
int main(){
	int n=0;
	int a=0;
	int num[30001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		num[a]++;
	}

	int max=0;
	for(int i=1;i<=30000;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
		for(int i=1;i<=30000;i++){
		if(num[i]==max){
			printf("%d %d\n",i,max);
		}
	}
	return 0;
}
