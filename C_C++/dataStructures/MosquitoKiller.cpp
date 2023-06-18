#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		float arr[n][4];
		for(int i=0;i<n;i++)
			for(int j=0;j<4;j++){
				scanf("%f",&arr[i][j]);
			}
		
		scanf("%d",&n);
	}
	return 0;
}
