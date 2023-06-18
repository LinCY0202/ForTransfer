#include<stdio.h>
int main(){
	int x[32]={1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400,441,484,529,576,625,676,729,784,841,900,961,1000};
	printf("%d",x[31]);
	int T=0;
	int a[1001]={0},b[1001]={0};
	int xa=0,xb=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	scanf("%d%d",&a[i],&b[i]);
	} 
int j;
	for(int i=0;a[j]>=x[i]&&a[j]<x[i+1];i++){
	xa=i;
	}	
	for(int i=31;b[j]<x[i]&&b[j]>=x[i-1];i++){
	xb=i;
	}
	return 0;
} 
