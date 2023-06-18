#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m=0;
		scanf("%d",&m);
		int min=100000;
		int ad=0;
		for(int j=0;j<m;j++){
			int a=0,b=0;
			scanf("%d%d",&a,&b);
			a=a*60+b;
			if(a<min){
				min=a;
			}
			ad+=a;
		}
		printf("Track %d:\n",i+1);
		printf("Best Lap: %d minute(s) %d second(s).\n",min/60,min%60);
		ad=ad/m;
		printf("Average: %d minute(s) %d second(s).\n\n",ad/60,ad%60);
	}
	return 0;
}

