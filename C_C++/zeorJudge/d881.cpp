#include<stdio.h>
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1){
		n=50+n*(49*50*51/6)-(n-1)*1225;
		printf("%d\n",n);
	}
	return 0;
}

