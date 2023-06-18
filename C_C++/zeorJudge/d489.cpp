#include<stdio.h>
int main(){
	int a=0,b=0,c=0;
	scanf("%d%d%d",&a,&b,&c);
	int s=(a+b+c)/2;
	int p=s*(s-a)*(s-b)*(s-c);
	printf("%d",p);
    return 0;

}

