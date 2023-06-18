#include<stdio.h>
int main(){
	long long int n=0,m=0;
	while(scanf("%d%d",&n,&m)!=-1){
		if(m==0){
			printf("Go Kevin!!\n");
			continue;
		}
		else if(n!=1&&n==m){
			printf("No Stop!!\n");
			continue;
		}
		else{
			int i=1;
			while(n>0){
				n=n-i;
				i=i+m;
			}
			if(n==0){
				printf("Go Kevin!!\n");
			}
			else{
				printf("No Stop!!\n");
			}
		}
	}
	return 0;
} 
