#include<stdio.h>
int main(){
	double average=10/3;
	printf("%f\n",average);//  10/3��int���O,�Gaverage=3.000000 
		
    average=10/3.;
	printf("%f\n",average);//  10/3��double���O,�Gaverage=3.333333
	
	average=10/(double)3;  //  �j��O�ഫ 
	printf("%f\n",average);//  10/3��double���O,�Gaverage=3.333333
	
	return 0;
} 
