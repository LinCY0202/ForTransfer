#include<stdio.h>
int main(){
	int row=0,column=0;
	scanf("%d%d",&row,&column)==-1;

	int array[row-1][column-1];
//	row--,column--;
	for(int i=0,j=0;i<row;i++)
	{
		for(;j<column;)
		{
			printf("j=%d\n",j);
			scanf("%d\n",&array[i][j])==-1;
			j=j+1;
		}j=0;
	}
//		printf("%d\n",array[0][2]);
		for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++){
			printf("%d ",array[i][j]);
		}printf("\n");
	}
	
	return 0;
} 
