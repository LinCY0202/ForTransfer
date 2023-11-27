#include<stdio.h>
#include<math.h>
int main(){
	double money,interest_rate,year;
	double year_interest_rate=0,month_interest_rate=0;
	scanf("%lf%lf%lf",&money,&interest_rate,&year);
	
	
	year_interest_rate=money*pow((1+interest_rate/100),year);
	month_interest_rate=money*pow((1+interest_rate/100/12),year*12);
	printf("%d\n",int(year_interest_rate));
	printf("%d\n",int(month_interest_rate));
}
//月複利=本金*(1+年利率/100/12)^(year*12) 
