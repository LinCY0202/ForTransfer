#include <stdio.h>
int main()
{
    int x,y; 
    int ans=1; //�_�l�Ƭ�1
    int i=2; //��]�Ƥ��ѥ�2�}�l
    scanf("%d%d",&x,&y);
    int X=x,Y=y;
    while(Y!=0){
    	int tame=Y;
    	Y=X%Y;
    	X=tame;
	}
    printf("�̤j���]��:%d\n",X);
    
    if( x==1 || y==1 ) printf("%d",x*y);
    else if( x>=i && y>=i ){
    //x,y�Ҥj�󵥩�2�}�l��]�Ƥ���
        while( x>=i && y>=i ){
            //�l�ƬҬ�0�ɡA2�}�l��]�Ƥ��ѡA�Y���Q2�����A�h����W�[��3�B4�B5�K�K
	        while( x%i==0 && y%i==0 )
	        {
	                ans = ans * i;
	                x /= i;
	                y /= i;
	            }
	            i++;
        }
        printf("�̤p������%d",ans*x*y);
    }
    return 0;
}
