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
		for(int i=0;i<len;i++)//將字串全部轉成剩英文 
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
		if(len==0)//只有一個字母 
		{
		printf("yes !\n");
		}
		else if(len==-1)//沒有字母 
		{
			printf("no...\n");
		}
			else//判斷是否為迴文 
			{
			if(len%2==0)//基數的情況 
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
				for(int i=0,j=len;i<=(len+1)/2-1;i++,j--)//偶數的情況 
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
		for(int i=0;i<=1002;i++)//將字串清空 
		{
			str[i]=0;
			str1[i]=0;
		}
	}
	return 0;
}
