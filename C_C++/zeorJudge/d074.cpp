#include<stdio.h>
int main(){
	int cla=0;//¯Z¯Å 
	int people=0;
	int max=0;
	scanf("%d",&cla);
	for(int i=0;i<cla;i++)
	{
		scanf("%d",&people);
		if(people>=max)
		{
		max=people;
		} 
	}
	printf("%d",max);
	return 0;
}
