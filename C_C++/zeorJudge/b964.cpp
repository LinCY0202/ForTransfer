#include<stdio.h>
#include <stdlib.h>
	int cmp(const void *a, const void *b)
		{
		return *(int *)a - *(int *)b;
		}
int main(){
	int n=0;
	int num[20]={0};
	int pass=101,fail=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	qsort(num,n,sizeof(int),cmp);
	for(int i=0;i<n;i++){
		if(num[i]>=60&&num[i]<pass){
			pass=num[i];
		}
		else if(num[i]<60&&num[i]>fail){
			fail=num[i];
		}
		printf("%d ",num[i]);
	}
	printf("\n");
	if(fail!=-1){
		printf("%d\n",fail);
	}
	else{
		printf("best case\n");
	}
	if(pass!=101){
		printf("%d\n",pass);
	}
	else{
		printf("worst case\n");
	}
	return 0;
}
