#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	while(scanf("%s",s)){
		if(s[0]=='0'){
			break;
		}
		int count=0;
		for(int i=0;i<strlen(s);i++){
			if(i&1){
				count+=s[i]-'0';
			}
			else{
				count-=s[i]-'0';
			}
		}
		if(count%11==0){
			printf("%s is a multiple of 11.\n",s);
		}
		else{
			printf("%s is not a multiple of 11.\n",s);
		}
	}
	return 0;
}
