#include<stdio.h>
int main(){
	int a=5;
	char b='2';
	double c=12.42;
	printf("int 記憶體大小:%d\n",sizeof(a));
	printf("char 記憶體大小:%d\n",sizeof(b));
	printf("double 記憶體大小:%d\n",sizeof(c));
	return 0;
}
