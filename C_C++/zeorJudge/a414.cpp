#include<stdio.h>
int main(){
	int input=1,count=0;
	while(1){
		count=0;
		scanf("%d",&input);
		if(input==0)break;
		while(input%2==0){
		count++;
		input/=2; 
		}
	printf("%d\n",count);
	}

	return 0;
} 
