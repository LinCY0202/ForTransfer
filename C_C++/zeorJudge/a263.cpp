#include<stdio.h>
#include<time.h>
#include<math.h>
int main(){
	int y=0,m=0,d=0;
	int yy=0,mm=0,dd=0;
	struct tm date={0};
	while(scanf("%d%d%d%d%d%d",&y,&m,&d,&yy,&mm,&dd)!=-1){
		date.tm_year=y-1900;
        date.tm_mon=m-1;
        date.tm_mday=d;
        long long int count1=mktime(&date);
    //    printf("%d \n",count1/86400);
        count1/=86400;
        date.tm_year=yy-1900;
        date.tm_mon=mm-1;
        date.tm_mday=dd;
        long long int count2=mktime(&date);
		count2/=86400;
   //     printf("%d",count2/86400);
		printf("%lld",abs(count1-count2));
		printf("\n");
	}
	return 0;
}
