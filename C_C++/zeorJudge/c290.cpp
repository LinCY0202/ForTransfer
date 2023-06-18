#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char str[1000]={0};
	scanf("%s",str);
	int count=0;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(i%2==0){
			count+=str[i]-'0';
		}
		else{
			count-=str[i]-'0';
		}
	}
	printf("%d",abs(count));
	return 0;
} 
