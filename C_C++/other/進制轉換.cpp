#include<stdio.h>
int TenToEight(int);
int TenToSixteen(int);



int main(){
printf("��ܤQ�i���ഫ���H�U����\n");
printf("�п��:1.�Q���i��B2.�K�i��\n");
int x=0;
scanf("%d",&x);
if(x==2){

int a=0;
while(scanf("%d",&a)!=-1){
//printf("%c",a[0]);
TenToEight(a);
}
}
return 0;
} 
int TenToEight(int a){
	int b[100000],i=0;
	for(i=0;a>0;i++){
		b[i]=a%2;
		a/=2;
	}i--;
	for(;i>=0;i--){
	printf("%d",b[i]);
	}printf("\n");
	
	return 0;
}
