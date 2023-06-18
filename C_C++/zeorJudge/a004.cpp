#include <stdio.h>
#include <math.h>  

int main()
{ 
int a,b,c,n,m,k;
scanf("%d%d%d",&a,&b,&c);

n=sqrt(b*b-4*a*c);
//printf("%d",n);
if(n<0)
{
printf("No real root\n");
}
else if(n==0)
{
printf("Two same roots x=%d\n",(-1*b)/2*a);
}
else if(-1*b+n>-1*b-n)
{
m=(-1*b+n)/(2*a);
k=(-1*b-n)/(2*a);
printf("Two different roots x1=%d , x2=%d", m,k);
}
else if(-1*b+n<-1*b-n)
{
k=(-1*b+n)/(2*a);
m=(-1*b-n)/(2*a);
printf("Two different roots x1=%d , x2=%d", m,k);

}

return 0;
}

//Two different roots x1=?? , x2=??
//
//Two same roots x=??
//
//
