#include<stdio.h>
int main(){
	int N=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int x,y,z,w,n,m;
		scanf("%d %d %d %d %d %d",&x,&y,&z,&w,&n,&m);
		char c;
		int poi=0;
		int k=1;//life
		scanf("%c",&c);
		while(scanf("%c",&c)){
			if(c==' '){
				continue;
			}
			else if(c=='\n'){
				break;
			}
			else{
				if(c=='0'){
					m-=poi;
					if(m<=0){
						k=-1;
					}
				}
				if(c=='1'){
					m-=poi;
					if(m<=0){
						k=-1;
					}
					m+=x;
					
				}
				if(c=='2'){
					m-=poi;
					if(m<=0){
						k=-1;
					}
					m+=y;
				}
				if(c=='3'){
					m-=poi;
					if(m<=0){
						k=-1;
					}
					m-=z;
					
				}
				if(c=='4'){
					m-=poi;
					poi+=n;
					if(m<=0){
						k=-1;
					}
					m-=w;
					
				}
				if(m<=0){
						k=-1;
					}
			}
		}
		if(k==-1){
			printf("bye~Rabbit\n");
		} 
		else{
			printf("%dg\n",m);
		}
	}
	return 0;
}
