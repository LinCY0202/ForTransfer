#include<stdio.h>
int main(){
	int weight=0;
	scanf("%d",&weight);
	weight=((weight<=50)?weight:weight-1);
	printf("%d",weight);


	return 0;
}
