#include<stdio.h>
#include<string.h>
int main(){
	char str[1000];
	scanf("%s",str);
	int len=strlen(str);
	printf("%c",str[0]);
	for(int i=0;i<len-2;i++){
		printf("_");
	}
	printf("%c",str[len-1]);
	//printf("%d",len);
	
	return 0;	
}
