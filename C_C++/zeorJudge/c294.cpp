#include<stdio.h>
int main(){
	int a=0,b=0,c=0;
	while(scanf("%d%d%d",&a,&b,&c)!=-1){
		if(a>b){
			int tame=a;
			a=b;
			b=tame;
		}
		if(a>c){
			int tame=a;
			a=c;
			c=tame;
		}
		if(b>c){
			int tame=b;
			b=c;
			c=tame;
		}
		printf("%d %d %d\n",a,b,c);
		if(a+b<=c){
			printf("No\n");
		}
		else if(a*a+b*b==c*c){
			printf("Right\n");
		}
		else if(a*a+b*b<c*c){
			printf("Obtuse\n");
		}
		else{
			printf("Acute\n");
		}
	}
	return 0;	
}
