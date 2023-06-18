#include<stdio.h>
int main(){
	char a[33];
	char b[33];
	int ans[33]={0};
	int c[33]={0};
	c[31]=0;
	while(scanf("%s%s",a,b)!=-1){

		for(int i=31;i>=0;i--){
			int A=a[i]-'0';
			int B=b[i]-'0';
			ans[i]=A^B^c[i];
			if(i>0){
				c[i-1]=(A&B)|(B&c[i])|(c[i]&A);
			}
		}
		puts(a);
		puts(b);
		printf("---------------------------------\n");
		for(int i=0;i<32;i++){
			printf("%d",ans[i]);
		} 
		printf("\n****End of Data******************\n");
	}
	return 0;
}
