#include<stdio.h>
int main(){
	int year=1;
	scanf("%d",&year);
	while(year!=0)
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
		scanf("%d",&year);		
	}
	 
	
	return 0;
} 
