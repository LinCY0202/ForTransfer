#include<stdio.h>
int main(){
	int n=0,m=0;
	scanf("%d%d",&n,&m);
	int num[100001]={0};
	for(int i=1;i<=n;i++){//輸入數列 
		scanf("%d",&num[i]);
	}
//	for(int i=1;i<=n;i++){
//		printf("%d ",num[i]);
//	}
	for(int i=0;i<m;i++){//跑m次 
		int a=0,b=0;
		int count[100001]={0};
		scanf("%d%d",&a,&b);
		for(int j=a;j<=b;j++){//計次 
			count[num[j]]++;
		}
		int max=0;
		int timer=0;
		for(int k=1;k<=n;k++){
			if(count[k]>max){
				max=count[k];
				timer=0;
			}
			if(count[k]==max){
				timer++;
			}
		}

		printf("%d %d\n",max,timer);
	}
	return 0;
} 
//		for(int k=1;k<=n;k++){
//			printf("%d ",count[k]);
//		}
