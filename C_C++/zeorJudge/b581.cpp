#include<stdio.h>
int main(){
	int n=0;
	char ch='0';
	int a,b=1;
	scanf("%d\n",&n);
//	ch=getchar();
	for(int i=0;i<n;i++){
		int count=0;
		a=1,b=0;
		ch=getchar();
		while(ch!='\n'){
			if(ch!=' '&&ch!='-'){
				b+=ch-'0';
			}
			else if(ch=='-'){
				a=-1;
			}
			ch = getchar();
			if(ch==' '||ch=='\n'){
				count+=b*a;
				b=0;
				a=1;
			}
			else{
				b=b*10;
			}
		}
		printf("%d\n",count);

	}	
	return 0;
}
