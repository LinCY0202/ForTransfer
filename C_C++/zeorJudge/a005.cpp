#include <stdio.h>      
  int main()      
{      
    int a,b,c,d,e,q;   
	scanf("%d",&q);   
    for(;q>0;q--)
	{
	scanf("%d%d%d%d\n", &a,&b,&c,&d);    
   if(b-a==c-b)
   e=d+b-a;
   else
   {e=(b/a)*d;}
printf("%d %d %d %d %d\n",a,b,c,d,e);}
    return 0;      
}
