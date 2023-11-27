#include<stdio.h>
int main(){
	double average=10/3;
	printf("%f\n",average);//  10/3為int型別,故average=3.000000 
		
    average=10/3.;
	printf("%f\n",average);//  10/3為double型別,故average=3.333333
	
	average=10/(double)3;  //  強制型別轉換 
	printf("%f\n",average);//  10/3為double型別,故average=3.333333
	
	return 0;
} 
