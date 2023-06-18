#include <stdio.h>
int main()
{ 
int a,b;
while(scanf("%d",&a)!=EOF)
{

if(a%4==0&&a%100!=0)
printf("¶|¦~\n");
else
printf("¥­¦~\n");
}


return 0;
}
