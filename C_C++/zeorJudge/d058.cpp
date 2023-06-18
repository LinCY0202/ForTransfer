#include<stdio.h>
int main(){
	int num=0;
	int a=2;
	scanf("%d",&num);
	a=((num>0)?1:a);
		a=((num==0)?0:a);
			a=((num<0)?-1:a);
	printf("%d",a);
	return 0;
}
