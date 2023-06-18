#include<stdio.h>
int main()
{

	char a[10];
	int count=0;
	scanf("%s",&a);

		
			if(a[0]<=72){
				count=count+(a[0]-55)/10;
				count=count+((a[0]-55)%10)*9;}
			
			else if(a[0]==73){
				count=count+3;
				count=count+4*9;
				}
				
			else if(a[0]<=78&&a[0]>=74){
				count=count+(a[0]-56)/10;
				count=count+((a[0]-56)%10)*9;}
			
			else if(a[0]==79){
				count=count+3;
				count=count+5*9;}
			
			else if(a[0]<=86&&a[0]>=80){
				count=count+(a[0]-57)/10;
				count=count+((a[0]-57)%10)*9;}
			
			else if(a[0]==87){
				count=count+3;
				count=count+2*9;} 
			
			else if(a[0]<=89&&a[0]>=88){
				count=count+(a[0]-58)/10;
				count=count+((a[0]-58)%10)*9;}
				
			else if(a[0]==90){
				count=count+3;
				count=count+3*9;}
		
			
	for(int i=1,j=8;i<=8;i++,j--){
			count=count+(a[i]-48)*j;
		}
		count=count+a[9]-48;
		if(count%10==0)
		{printf("real");} 
		else
		{printf("fake");
		}return 0;
	}
