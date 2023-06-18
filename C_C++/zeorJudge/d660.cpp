#include <stdio.h>	
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m=0;
		scanf("%d",&m);
		int a=0,b=0;
		int high=0,low=0;
		scanf("%d",&a);
		for(int j=1;j<m;j++){
			scanf("%d",&b);
			if(b>a){
				high++;
				a=b;
			}
			else if(b<a){
				low++;
				a=b;
			}
			else{
				a=b;
			}
		}
		printf("Case %d: %d %d\n",i+1,high,low);
	}
	return 0;
} 
