#include<stdio.h>
int main(){
	int n=0;
	int one[12]={0},two[12]={0};
	scanf("%d",&n);
	for(int i=0;i<12;i++){
		scanf("%d",&one[i]);
	}
	for(int i=0;i<12;i++){
		scanf("%d",&two[i]);
	}
	int i=1;
	while(1){
		
		printf("Case %d:\n",i);
		if(n>=two[0]){
			printf("No problem! :D\n");
			n=n-two[0];
		}
		else{
			printf("No problem. :(\n");
		}
		n=n+one[0];
		for(int j=1;j<12;j++){
			if(n>=two[j]){
				printf("No problem! :D\n");
				n=n-two[j];
			}
			else{
				printf("No problem. :(\n");
			}
			n=n+one[j];
		}
		i++;
		scanf("%d",&n);
		if(n==-1){
			break;
			}
		for(int i=0;i<12;i++){
			scanf("%d",&one[i]);
			}
		for(int i=0;i<12;i++){
			scanf("%d",&two[i]);
			}
	}
	return 0;
}
