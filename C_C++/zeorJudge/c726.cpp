#include<stdio.h>
#include<string.h>
int main(){
	char str[100000];
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}
		else{
			printf(" and ");
		}
		
	}
	printf(" sitting in the tree");
	return 0;
} 
