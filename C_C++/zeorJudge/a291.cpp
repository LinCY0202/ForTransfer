#include <stdio.h>	
int main(){
	int m[4]={-1};
	while(scanf("%d%d%d%d",&m[0],&m[1],&m[2],&m[3])!=-1){
		int n=0;
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			int k[4]={-1};
			int A=0,B=0;
			for(int j=0;j<4;j++){
				scanf("%d",&k[j]);
			}
			int s[4]={-1,-1,-1,-1};
			for(int j=0;j<4;j++){
				if(k[j]==m[j]){
					A++;
					s[j]=1;
				}
			}
		//	printf("%d %d %d %d\n",s[0],s[1],s[2],s[3]);
		int v[4]={-1,-1,-1,-1};
			for(int j=0;j<4;j++){
				if(s[j]!=1){
					for(int l=0;l<4;l++){
						if(k[l]==m[j]&&s[l]!=1&&v[l]!=1){
							v[l]=1;
							B++;
							break;
						}
					}
				}
			}
			printf("%dA%dB\n",A,B);
			
		}
	}

	
	return 0;
} 
