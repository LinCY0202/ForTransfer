#include<stdio.h>
int main(){
	int n=0,m=0;
	int nn[100001]={0},mm[100001]={0};
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&nn[i]); 
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&mm[i]);
		int left=1,right=m+1;
		int mid=(left+right)/2;
		int fail=-1;
		while(left<=right){
			if(mm[i]==nn[mid]){
				printf("%d\n",mid);
				fail=0;
				break;
			}
			else if(mm[i]>nn[mid]){
				left=mid+1;
				mid=(left+right)/2;
			}
			else{
				right=mid-1;
				mid=(left+right)/2;
			}
		} 
		if(fail==-1){
			printf("0\n");
		}
	}
	return 0;
}
