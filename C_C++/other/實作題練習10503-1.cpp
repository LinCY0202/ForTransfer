#include<stdio.h>
#include <algorithm>
using namespace std;
//幫助sort從大排到小 
//int aa(int b,int c){
//return b>c;}

int main(){
     
	int a[100];
	int b=0,c=-1,d=101;
	int i;
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	a[i]=101;
	sort(a,a+b);
	//排序函式 
//	printf("%d",i);
	for(i=0;i<b;i++){
		if(a[i]<60&&a[i+1]>=60){
		c=a[i];}
		if(a[i]>=60&&a[i-1]<60){
		d=a[i];}
}
	if(c==-1)
	{printf("best case\n");}
	if(c>=0)
	{printf("%d\n",c);}
	if(d<101)
	{printf("%d\n",d);}
	
	if(d==101)
	{printf("worst case\n");}

	return 0;
}

