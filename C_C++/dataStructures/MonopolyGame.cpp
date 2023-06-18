#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n/2);
	while(n!=0){
		int book[n];
		for(int i=0;i<n;i++)
			scanf("%d",&book[i]);
		sort(book,book+n);
		for(int i=0;i<n/2;i++){
			printf("%d ",book[i]+book[n-1-i]);
		}
		printf("\n");
		scanf("%d",&n);
		if(n==0)
			break;
		printf("%d\n",n/2);
	}
}
