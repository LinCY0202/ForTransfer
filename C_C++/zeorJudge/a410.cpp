#include<stdio.h>
int main(){
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	float k=a*e-b*d;
	float x=c*e-f*b;
	float y=a*f-c*d;
	if(k==0&&x==0&&y==0){
		printf("Too many\n");
	}
	else if(k!=0){
		float X=x/k,Y=y/k;
		printf("x=%.2f\n",X);
		printf("y=%.2f\n",Y);
	}
	else{
		printf("No answer\n");
	}
	
	return 0;
}
