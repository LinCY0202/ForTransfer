#include<stdio.h>
int main(){
	int year=1;
	
	while(scanf("%d",&year)!=-1)
	{

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
