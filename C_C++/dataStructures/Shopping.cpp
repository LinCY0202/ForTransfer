#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=-1){
		int item[n],girl[m];
		for(int i=0;i<n;i++)
			scanf("%d",&item[i]);
		for(int i=0;i<m;i++)
			scanf("%d",&girl[i]);
		sort(item,item+n);
		sort(girl,girl+m);
		int count=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				if(girl[i]<=item[j]){
					count+=item[j];
					break;
				}
		}
		printf("%d\n",count);
	}
	return 0;
}
