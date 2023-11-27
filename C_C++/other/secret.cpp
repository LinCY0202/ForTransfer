#include<stdio.h>
int main(){
	long long int x;
	scanf("%lld",&x);
	int y=0;
	int p=1;
	while(x!=0){
		y+=x%10*p;
		p*=-1;
		x/=10;
	}
	if(y<0)
		printf("%d\n",y*-1);
	else
		printf("%d\n",y);
		
}
