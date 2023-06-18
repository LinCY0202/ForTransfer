#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1)
	{
		long long int f=0,g=0;
		f=((1+n)*n)/2;
		printf("%d ",f);
		for(;n!=0;)
		{
		g+=f;
		f=f-n;
		n--;
		}
		printf("%lld\n",g);
	}
	
	return 0;
}
