#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int k=1;
	for(int i=0;i<n;i++){
		char num1[30]={-1},num2[30]={-1};
		scanf("%s%s",num1,num2);
		int len1=strlen(num1);
		int len2=strlen(num2);
		int count1=0,count2=0,count=0;
		int x=1;//2*2*2
		for(int j=len1-1;j>=0;j--){
			count1+=(num1[j]-'0')*x;
			x=x*2;
		}
		x=1;
		for(int j=len2-1;j>=0;j--){
			count2+=(num2[j]-'0')*x;
			x=x*2;
		}
		while(count1!=0&&count2!=0){
            if(count1>=count2)
            {
                count1%=count2;
            }
            else
            {
                count2%=count1;
            }
        }
        if(count1>count2){
        	count=count1;	
		}
		else{
			count=count2;
		}
		if(count>1){
			printf("Pair #%d: All you need is love!\n",k);
		}
		else{
			printf("Pair #%d: Love is not all you need!\n",k);
		}
		k++;
		//printf("%d %d\n",count1,count2);
	}
	return 0;
}
