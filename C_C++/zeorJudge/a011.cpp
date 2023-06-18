#include<stdio.h>
int main(){
	char c;	
	int count=0;
	int fail=0;
	while(scanf("%c",&c)!=-1){

		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			fail=1;
		}
		else{
			if(fail==1){
				count++;
				fail=0;
			}
		}
		if(c=='\n'){
			printf("%d\n",count);
			count=0;
		}
	}
//	printf("%d",count);
	return 0;
} 
