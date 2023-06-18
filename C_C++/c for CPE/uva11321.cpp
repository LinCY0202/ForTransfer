#include<stdio.h>
int main(){
	int n[10000],m[10000];
	int N,M;
	while(scanf("%d%d",&N,&M)){
		if(N==0&&M==0){
			break;
		}
		for(int i=0;i<N;i++){
			scanf("%d",&n[i]);
			m[i]=n[i]%M;
		}
		//sort after mod for m[array] 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
		printf("%d %d\n",N,M);
		for(int i=0;i<N;i++){
			for(int j=N-1;j>0+i;j--){
				if(m[j]<m[j-1]){
					int tame=m[j];
					m[j]=m[j-1];
					m[j-1]=tame;
					tame=n[j];
					n[j]=n[j-1];
					n[j-1]=tame;
				}
			}
		}
		//sort n[array]
		for(int i=0;i<N;i++){
			for(int j=N-1;j>0+i;j--){
				if(m[j]==m[j-1]){//mod
					if(n[j]%2!=0&&n[j-1]%2!=0){//both odd
						if(n[j]>n[j-1]){
							int tame=n[j];
							n[j]=n[j-1];
							n[j-1]=tame;
						}
					}
					else if(n[j]%2==0&&n[j-1]%2==0){//both even
						if(n[j]<n[j-1]){
							int tame=n[j];
							n[j]=n[j-1];
							n[j-1]=tame;
						}
					}
					else{//odd and even
						if(n[j]%2!=0){
							int tame=n[j];
							n[j]=n[j-1];
							n[j-1]=tame;
						}
					}
				}
			}
		}
		//ptint 
		for(int i=0;i<N;i++){
			printf("%d\n",n[i]);
		}

		}
	printf("0 0\n");
	return 0;
} 
