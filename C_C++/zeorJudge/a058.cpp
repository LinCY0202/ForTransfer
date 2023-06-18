#include<stdio.h>
int main(){
	int time=0;
	int n[60000];
	int zero=0,one=0,two=0;
	scanf("%d",&time);
	for(int i=0;i<time;i++){
		scanf("%d",&n[i]);
	}
//	printf("%d",i);
	for(int i=0;i<time;i++){
		if(n[i]%3==0){
		zero++;
		}
		else if(n[i]%3==1){
		one++;	
		}
		else if(n[i]%3==2){
		two++;	
		}
		
		
	}printf("%d %d %d",zero,one,two);
	
	return 0;
}
