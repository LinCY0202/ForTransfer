#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int num[300];
	for(int i=0;i<n;i++){
		int a=0,b=0;
		scanf("%d%d",&a,&b);
		a=a*b;
		for(int j=0;j<a;j++){
			scanf("%d",&num[j]);
		}
		int k=0;
		for(int j=0;j<a;j++){
			if(num[j]!=num[a-j-1]){
				printf("keep defending\n");
				k=1;
				break;
			}

		}
		if(k==0){
			printf("go forward\n");
		}
	} 
    return 0;

}
