#include<stdio.h>
int main(){
	int time=0;
	scanf("%d",&time);
	time=((time<=25)?25-time:85-time);
	printf("%d",time);
	return 0;
}
