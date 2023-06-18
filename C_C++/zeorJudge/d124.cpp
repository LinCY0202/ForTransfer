#include<stdio.h>
#include<string.h>
int main(){
	char str[10002]={'0'};
	while(scanf("%s",str)!=-1){
		if(str[0]=='-'){
			str[0]='0';
		}
		int count=0;
		for(int i=0;i<strlen(str);i++){
			count+=str[i]-'0';
		}
		if(count%3==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}

