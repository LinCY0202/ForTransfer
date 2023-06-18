#include<stdio.h>
#include<string.h>
int main(){
	char str[100]={0};
	scanf("%s",str);

	while(str[0]!='-'){
	//	int num[100]={0};
		int len=strlen(str);
		int count=0;
		char num16[100];
		int tame=0;
		int x=1;//10->16use
		if(str[0]=='0'){//16
			for(int i=len-1;i>=2;i--){
				if(str[i]-'0'<10){
					count+=(str[i]-'0')*x;
					x=x*16;
//					printf("%d\n",count);
				}
				else{
					count+=(str[i]-55)*x;
					x=x*16;
				}
			}
			printf("%d\n",count);
		}	
		else{
			for(int i=len-1,j=1;i>=0;i--){
				count+=(str[i]-'0')*j;
				j=j*10;
			}
			for(int i=0;count>0;i++){
				if(count%16<10){
					num16[i]=count%16+'0';
					count=count/16;
					tame++;
				}
				else{
					num16[i]=count%16+55;
					count=count/16;
					tame++;
				}
			}
			printf("0x");
			for(int i=tame-1;i>=0;i--){
				printf("%c",num16[i]);
			}
			printf("\n");
		}	 
		
		
		scanf("%s",str);
	}
	return 0;
}
