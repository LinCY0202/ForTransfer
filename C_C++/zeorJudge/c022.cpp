#include<stdio.h>
int main(){
	int n=0;
	int count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a%2==0)
			{
				a++;
			}
		if(b%2==0)
			{
				b--;
			}
		for(;a<=b;a=a+2)
		{
			count+=a;	
		}
	printf("Case %d: %d\n",i,count);
	count=0;
	}
	return 0;
}
