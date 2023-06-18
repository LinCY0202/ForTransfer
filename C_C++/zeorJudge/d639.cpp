#include<stdio.h>
int main (){
	int n,i,a[7];
	while (scanf ("%d",&n)==1){
		a[1]=a[2]=a[3]=1;
		a[4]=a[5]=a[6]=0;
		for (i=4;i<=n;i+=3){
			a[4]=a[3]+a[2]+a[1];
			a[5]=a[4]+a[3]+a[2];
			a[6]=a[5]+a[4]+a[3];
			a[1]=a[4]%10007;
			a[2]=a[5]%10007;
			a[3]=a[6]%10007;
		}
		a[0]=a[3];
		printf ("%d\n",a[n%3]);
	}
return 0;
}
