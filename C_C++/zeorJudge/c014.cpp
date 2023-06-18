#include<stdio.h>
int main(){
	int a=0,b=0;
	
	while(scanf("%d%d",&a,&b)!=-1){
		if(a==0&&b==0){
			break;
		}
		int count=0;
		
		for(int tame=0;a>0||b>0;a=a/10,b=b/10){		
			if(a%10+b%10+tame>=10){
				count++;
				tame=1;
			}
			else{
				tame=0;
			}
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
	return 0;
} 
