#include<stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n=0;
	while(scanf("%d",&n)!=-1){
		int num[100];
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sort(num,num+n);
//	for(int i=0;i<n;i++){
//		printf("%d ",num[i]);
//	}
		if(num[n-1]-num[0]==n-1){
			printf("%d %d yes\n",num[0],num[n-1]);
		}
		else{
			printf("%d %d no\n",num[0],num[n-1]);
		}
	}
	return 0;
}
