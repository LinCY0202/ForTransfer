#include<stdio.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)){
		if(n==0&&m==0){
			break;
		}
		int count=0;
		int tame=0;
		while(n>0||m>0){

			if(n%10+m%10+tame>=10){
				count++;
				tame=1;
			}
			else{
				tame=0;
			}
			n/=10,m/=10;
		}

		if(count==0){
			printf("No carry operation.\n");
		}
		else if(count==1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n",count);	
		}
	}
}
