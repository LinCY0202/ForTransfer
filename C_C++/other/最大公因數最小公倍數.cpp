#include <stdio.h>
int main()
{
    int x,y; 
    int ans=1; //癬﹍计1
    int i=2; //借计だ秆パ2秨﹍
    scanf("%d%d",&x,&y);
    int X=x,Y=y;
    while(Y!=0){
    	int tame=Y;
    	Y=X%Y;
    	X=tame;
	}
    printf("程そ计:%d\n",X);
    
    if( x==1 || y==1 ) printf("%d",x*y);
    else if( x>=i && y>=i ){
    //x,y单2秨﹍借计だ秆
        while( x>=i && y>=i ){
            //緇计02秨﹍借计だ秆璝常砆2だЧ玥嘲尿糤345
	        while( x%i==0 && y%i==0 )
	        {
	                ans = ans * i;
	                x /= i;
	                y /= i;
	            }
	            i++;
        }
        printf("程そ计%d",ans*x*y);
    }
    return 0;
}
