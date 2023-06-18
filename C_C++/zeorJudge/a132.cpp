#include<stdio.h>
int main(){
	int n=0;
	int num[100]={0};
	scanf("%d",&n);
	while(n!=0){
		int count=0;
		int tame=0;
		printf("The parity of ");
		for(int i=0;n>0;n=n/2,i++){
			if(n%2==1){
				count++;
				num[i]=1;
				tame++;
			}
			else{
				num[i]=0;
				tame++;
			}
		}
		tame--;
		while(tame>=0){
			printf("%d",num[tame]);
			tame--;
		}
		printf(" is %d (mod 2).\n",count);
		scanf("%d",&n);
	}
	return 0;
}
