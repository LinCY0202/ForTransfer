#include<stdio.h>
#include<math.h>
int main(){
	int n=0;
	int x[1001]={0},y[1001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	int max=0;//�̻��Z�� 
	int k=2000,j=2000;//�̻����I 
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
//��X��Ӿ�� i j �A�����Ϊťդ��j�A��ܲ� i ���I�M�� j ���I���̻� ( i < j )�C
//
//�p�G��X���̻��Z�����I�靈�ܦh�աA�п�X i �̤p���աA�p�G i �@�ˡA�h�п�X j �̤p���աC
//
//�|�Ҩӻ��A���]�����W���I���̻����Z���� 2�A�B�� 5 ���I�M�� 2 ���I���Z���� 2�A�� 3 ���I�M�� 6 ���I���Z���笰 2�A�h��X�u2 5�v�C
