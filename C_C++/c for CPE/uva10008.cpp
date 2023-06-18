#include<stdio.h>
#include<stdlib.h>    
#include<string.h>
int alphabet[26]={0};
int main(){
	char s[10000];
	int n;
	while(scanf("%d ",&n)==1){
		for(int i=0;i<n;i++){
			gets(s)!=0;
			int len=strlen(s);
			for(int j=0;j<len;j++){
				if('a'<=s[j]&&s[j]<='z')
					alphabet[s[j]-'a']++;
				if('A'<=s[j]&&s[j]<='Z')
					alphabet[s[j]-'A']++;
			} 	
		
		}
		int alphabet1[26]={0};
		for(int i=0;i<26;i++)
		alphabet1[i]=i;
		for(int i=0;i<26;i++)
			for(int j=0;j<25;j++){
				if(alphabet[j]<alphabet[j+1]){
					int tame=alphabet[j];
					alphabet[j]=alphabet[j+1];
					alphabet[j+1]=tame;
					
					tame=alphabet1[j];
					alphabet1[j]=alphabet1[j+1];
					alphabet1[j+1]=tame;
				}
				if(alphabet[j]==alphabet[j+1]){
					if(alphabet1[j]>alphabet1[j+1]){
						int tame=alphabet1[j];
						alphabet1[j]=alphabet1[j+1];
						alphabet1[j+1]=tame;
					} 
				}
			}
		for(int i=0;i<26;i++){
			if(alphabet[i]!=0){
				printf("%c ",alphabet1[i]+'A');
				printf("%d",alphabet[i]);
				printf("\n");
			}
			
		}
			
	}
	return 0;
}
