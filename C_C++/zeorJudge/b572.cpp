#include<stdio.h>
int main(){
	int m=0;
	scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		int h1,m1,h2,m2,n;
		scanf("%d%d%d%d%d",&h1,&m1,&h2,&m2,&n);
		m1=m1+n;
		if(m1>=60){
			h1++;
			m1-=60;
		}
		if(h1==h2){
			if(m1<=m2){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
		else if(h1>h2){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}
	
	
	return 0;
} 
