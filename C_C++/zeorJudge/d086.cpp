#include<stdio.h>
#include<string.h>
int main(){
	char word[201]={0};
	scanf("%s",word);
	int str=strlen(word);
	int a=-1;//�T�{�O�_���O�^��r�� 
	int count=0;//�p�� 
	while(1){
		str=strlen(word);
		if(word[0]==48&&str==1)
		{
			break;
		}
		for(int i=0;i<str&&a==-1;i++)//�P�_�O�_�����^��r���A�N�j�g��p�g 
		{
			if(word[i]<65||(word[i]>90&&word[i]<97)||word[i]>122)
			{
				a=1;
			}
			else if(a==-1&&word[i]>=65&&word[i]<=90)
			{	
				word[i]=word[i]+32;
			}
			
		}
		if(a==-1)
		{ 
			for(int i=0;i<str;i++)
			{
				count+=word[i]-96;
			}
			printf("%d",count);
		}
			else if(a==1)
			{
				printf("Fail");
				a=-1;
			} 
			printf("\n");
			count=0;
			scanf("%s",word);
			str=strlen(word);
		
	}
	
	return 0;
}
