#include<stdio.h>
int main(){
	int t=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n=0,m=0;
		scanf("%d%d",&n,&m);
		int num[n][n];
		int x=0,y=0;//��m 
		int step=n-1;//���X�B 
		int state=0;//��V 
		int k=0;//�ثe 
		
		if(m==1){
			state=0;
			y=-1;
		}
		else{
			state=1;
			x=-1;
		}
		//��:0�k1�U2��3�W
		//�f:1�U0�k3�W2�� 
		for(int j=0;j<n;j++){
			k++;
			if(state==0)y++;
			else if(state==1)x++;
			num[x][y]=k;
		}
		while(k<n*n){
			if(m==1)state++;
			else state--;
			if(state==-1)state=3;
			if(state==4) state=0;
			
			for(int j=0;j<step;j++){
				k++;
				if(state==0)y++;
				else if(state==1)x++;
				else if(state==2)y--;
				else if(state==3)x--;
				num[x][y]=k;
			}
			
			if(m==1)state++;
			else state--;
			if(state==-1)state=3;
			if(state==4) state=0;
			
			for(int j=0;j<step;j++){
				k++;
				if(state==0)y++;
				else if(state==1)x++;
				else if(state==2)y--;
				else if(state==3)x--;
				num[x][y]=k;
			}
			step--;
		}
		for(int x=0;x<n;x++){
			for(int y=0;y<n;y++){
				printf("%5d",num[x][y]);
			}
			printf("\n");
		}
	}
	
	return 0;
} 
