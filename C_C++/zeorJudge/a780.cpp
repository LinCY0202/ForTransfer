#include<stdio.h>
int main(){
	double a=0,b=0,c=0;
	scanf("%lf%lf%lf",&a,&b,&c);
	while(a!=0&&b!=0&&c!=0){
		double m=a/b;
		double ft=c/m;
		printf("%.2lf %.2lf\n",m,ft);
		scanf("%lf%lf%lf",&a,&b,&c);
	}
	return 0;
} 
