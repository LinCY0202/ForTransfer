#include<stdio.h>
int main(){
	int n=0,m=0;
	int nn[10000]={0};
	scanf("%d%d",&n,&m);

	while(n>0){
		int count=0;
		int a=0;
		for(int i=0;i<m;i++){
			scanf("%d",&nn[i]); 
		}
		for(int i=0;i<m;i++){
			scanf("%d",&a);
			int left=0,right=m+1;
			int mid=(left+right)/2;
			
			while(left<=right){
				if(a==nn[mid]){
					count++;
					break;
				}
				else if(a>nn[mid]){
					left=mid+1;
					mid=(left+right)/2;
				}
				else{
					right=mid-1;
					mid=(left+right)/2;
				}
			}	
		}
		printf("%d\n",count);
		n--;
	}
	return 0;
}
