#include<stdio.h>
int main(){
	int n=0;
	int num[100]={0};
	scanf("%d",&n);
	while(n>=0){
		int tame=0;
		if(n==0){
			printf("0\n");
		}
		else{
			for(int i=0;n>0;i++){
				num[i]=n%3;
				n=n/3;
				tame++;
			}
			tame--;
			while(tame>=0){
				printf("%d",num[tame]);
				tame--;
			} 	
			printf("\n");
		}

	
		scanf("%d",&n);
	}
	return 0;
}
