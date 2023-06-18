#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int len;
		char str1[55]={0},str2[55]={0};
		scanf("%d %s %s",&len,str1,str2);
		printf("%d %s %s\n",len,str1,str2);
		char head=str1[0],left=str2[0],right=str1[len-1];
		
	}
	return 0;
} 
