#include<stdio.h>
int main(){
	int n=0;//n<20
	long long int count=0;//�p�� 
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int f=0;//f<20
		scanf("%d",&f);
		for(int j=0;j<f;j++)
		{
			long long int a,b,c;//a=���n�Bb=�ƶq�Bc=���O����
			
			scanf("%lld %lld %lld",&a,&b,&c);
			count+=a*c; 
		}
	printf("%lld\n",count);	
	count=0;
	}
	
	return 0;
}
