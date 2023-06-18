#include<stdio.h>
#include<string.h>
char num[1000][10100]={'\0'};
char neg[1000][10100]={'\0'};
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1){
		int count[10100]={-1};
		int j=0;
		for(int i=0;i<n;i++){
			scanf("%s",num[i]);
			if(num[i][0]=='-'){
				
				num[i]={'\0'};
				i--;
			}
			count[i]=strlen(num[i]);
			printf("%d.\n",count[i]);
		}
		
	}
		
	return 0;
} 
