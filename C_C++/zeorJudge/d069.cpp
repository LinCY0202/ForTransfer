#include<stdio.h>
int main(){
	int time=0;
	int year;
	scanf("%d",&time);
	for(int i=0;i<time;i++)
	{	
		scanf("%d",&year);
		if(year%400==0)
		{
			printf("a leap year\n");
		}
		else if(year%4==0&&year%100!=0)
		{
			printf("a leap year\n");
		} 
		else
		{
			printf("a normal year\n");
		}

	}

	return 0;
}
