#include<stdio.h>
#include<string.h>
int main(){
	char str[1003]={0};
	char str1[1003]={0};
	while(scanf("%s",str)!=-1)
	{
		int j=0;
		int fail=0;
		int len=strlen(str);
		for(int i=0;i<len;i++)//�N�r������ন�ѭ^�� 
		{
			
			if(str[i]>=65&&str[i]<=90)
			{
				str1[j]=str[i]+32;
				j++;
			}
			else if(str[i]>=97&&str[i]<=122)
			{
				str1[j]=str[i];
				j++;
			}
		}
		//faafaavava
		len=strlen(str1)-1;
		if(len==0)//�u���@�Ӧr�� 
		{
		printf("yes !\n");
		}
		else if(len==-1)//�S���r�� 
		{
			printf("no...\n");
		}
			else//�P�_�O�_���j�� 
			{
			if(len%2==0)//��ƪ����p 
			{
				for(int i=0,j=len;i<=(len/2)-1;i++,j--)
				{	
					if(str1[i]!=str1[j])
					{
						fail=1;
						break;
					}
				}
			}
			else
			{
				for(int i=0,j=len;i<=(len+1)/2-1;i++,j--)//���ƪ����p 
				{
					if(str1[i]!=str1[j])
					{
						fail=1;
						break;
					}
				}
			}
			if(fail==1)
			{
				printf("no...\n");
			}
			else if(fail==0)
			{
				printf("yes !\n");
			}
		}
		for(int i=0;i<=1002;i++)//�N�r��M�� 
		{
			str[i]=0;
			str1[i]=0;
		}
	}
	return 0;
}
