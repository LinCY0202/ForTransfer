#include<stdio.h>
#include<string.h>
int main(){
	int b=0,c=0;
	int x=0;
	char a[10000]={0};
	scanf("%s",&a);
	b=strlen(a);
	b--;

	if((b+1)%2!=0)
	{
		for(c=0;b!=c;c++,b--)
			if(a[c]!=a[b])
	{			x=1;
	}
	}
	else if((b+1)%2==0){
		for(c=0;c-1!=b;c++,b--){
			if(a[c]!=a[b])
	{			x=1;
	}
		}
	}

	if(x==1)
	{printf("no");
	}
	if(x==0)
	{printf("yes");
	}
	return 0;
} 
