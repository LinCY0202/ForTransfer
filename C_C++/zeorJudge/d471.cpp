#include<stdio.h>
#include<math.h>
int main(){
	int n=0;
	
	while(scanf("%d",&n)!=-1){
		int num[15]={0};
		int p=pow(2,n);
		for(int i=0;i<p;i++){
			for(int i=n-1;i>=0;i--){
				printf("%d",num[i]);
			}
			printf("\n");

			num[0]++;
			for(int j=0;j<n;j++){
				if(num[j]==2){
					num[j]=0;
					num[j+1]++;
				}
			}
		}

	}
	return 0;
}
