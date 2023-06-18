#include<stdio.h>
int main(){
	int h1,m1,h2,m2;
	scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
	int count1=0,count2=0;
	count1=h1*60+m1;
	count2=h2*60+m2;
	if(count1>count2){
		count2+=1440;
		int count=count2-count1;
		printf("%d %d",count/60,count%60);
		
	}
	else{
		int count=count2-count1;
		printf("%d %d",count/60,count%60);
	}
	return 0;
} 
