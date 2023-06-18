#include<stdio.h>
#include<math.h>
int main(){
	int n=0;
	int x[1001]={0},y[1001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	int max=0;//最遠距離 
	int k=2000,j=2000;//最遠兩點 
	for(int i=0;i<n;i++){//k
		for(int u=1+i;u<n;u++){//j
			int dt=sqrt((x[i]-x[u])*(x[i]-x[u])+(y[i]-y[u])*(y[i]-y[u]));
			if(dt>max){
				max=dt;	
				j=2000;
				k=2000;
			}
			if(dt==max){
				
				//printf("%d %d %d %d\n",k,j,i,u);
				if(i<k){
					k=i;
					j=u;	
				}
				if(i==k&&u<j){
					k=i;
					j=u;
				}
			} 
		}
	}
	printf("%d %d\n",k,j);

	return 0;
} 
//輸出兩個整數 i j ，中間用空白分隔，表示第 i 個點和第 j 個點離最遠 ( i < j )。
//
//如果算出有最遠距離的點對有很多組，請輸出 i 最小的組，如果 i 一樣，則請輸出 j 最小的組。
//
//舉例來說，假設平面上兩點間最遠的距離為 2，且第 5 個點和第 2 個點的距離為 2，第 3 個點和第 6 個點的距離亦為 2，則輸出「2 5」。
