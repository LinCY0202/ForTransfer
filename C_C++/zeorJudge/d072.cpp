#include<stdio.h>
int main(){
	int time=0;
	int year;
	scanf("%d",&time);
	for(int i=1;i<=time;i++)
	{	
		scanf("%d",&year);
		if(year%400==0)
		{
			printf("Case %d: a leap year\n",i);//Case 1: a leap year
		}
		else if(year%4==0&&year%100!=0)
		{
			printf("Case %d: a leap year\n",i);
		} 
		else
		{
			printf("Case %d: a normal year\n",i);
		}

	}

	return 0;
}
