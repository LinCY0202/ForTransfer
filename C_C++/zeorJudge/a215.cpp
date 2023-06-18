#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	int time=1;
	while(scanf("%d %d",&n,&m)!=-1)
	{
	int count=n;	
		for(;count<=m;)
		{
			n=n+1;
			count+=n;
			time++;
		}
	printf("%d\n",time);	
	count=0;
	time=1;
	}
	return 0;
}
