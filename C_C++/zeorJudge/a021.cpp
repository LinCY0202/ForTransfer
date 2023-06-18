#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char A[600],B[600];
	int c[600]={0};
	char x;
	int a[600]={0},b[600]={0};
	scanf("%s%s%s",&A,&x,&B);
	
	int n=0,m=0;
	n=strlen(A);
	m=strlen(B);
	//≠À¬‡AB 
	for(int i=0,j=n-1;i<n;i++,j--){
		a[i]=A[j]-48;
	}printf("\n");
	for(int i=0,j=m-1;i<m;i++,j--){
		b[i]=B[j]-48;
	}
	//
	int max=0;
	if(n>=m){
		max=n;
	}
	else{
		max=m;
	}
//	printf("%c",a[0]);
	if(x==43){
		for(int i=0;i<max;i++){
			if(a[i]+b[i]>=10){
				c[i]=((a[i]+b[i]))%10;
			if(i==max-1){
				c[i+1]=1;
			}
			}
			if(a[i]+b[i]<10){
				c[i]=(a[i]+b[i]);
			}
		}
	}
		if(c[max]==1){
			printf("%d",c[max]);
	}
	for(int i=max-1;i>=0;i--){
		printf("%d",c[i]);
}
	
	
	
//		if(x==45){
//		printf("---");
//	}
		if(x==42){
		for(int i=0;i<max;i++){
			if(a[i]*b[i]>=10){
				c[i]=((a[i]*b[i]))%10;
			if(i==max-1){
				c[i+1]=(a[i]*b[i])/10;
			}
			}
			if(a[i]*b[i]<10){
				c[i]=(a[i]*b[i]);
			}
		}
	}
		if(c[max]>0){
			printf("%d",c[max]);
	}
	for(int i=max-1;i>=0;i--){
		printf("%d",c[i]);
}
//		if(x==47){
//		printf("\\\\");
//	}
	
	return 0;
 } 
