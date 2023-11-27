#include <stdio.h>
#define SIZE 5
void show(int a[]), bubble(int a[]);
int main(void)
{
   int data[SIZE];
   for(int i=0;i<5;i++)
   		scanf("%d",&data[i]);

   printf("排序前...\n");
   show(data);    
   bubble(data);    
   printf("排序後...\n");
   show(data);    
   return 0;
}
void show(int a[])
{
   int i;
   for(i=0;i<SIZE;i++) 
      printf("%d ",a[i]);
   printf("\n");
}
void bubble(int a[])
{
	for(int i=0;i<5;i++)
		for(int j=0;j<4;j++){
			if(a[j]>a[j+1]){
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
}
