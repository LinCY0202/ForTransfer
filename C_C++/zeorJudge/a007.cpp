#include<stdio.h>
#include<math.h>
int main(){
	int p[5133]={0};
	int m=0;
	for(int i=2;i<50000;i++){
		int f=0;

		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(f==0){
			p[m]=i;
			m++;
		}
	}

	int n=0;
	while(scanf("%d",&n)!=-1){
		int k=0;
		for(int i=0;i<5133;i++){
			if(n==p[i]){
				break;
			}
			else if(n%p[i]==0||p[i]>n){
				k=1;
				break;
			}
		}
		if(k==0){
			printf("質數\n");
		}
		else{
			printf("非質數\n");
		}
	}

	return 0;
}
