#include<stdio.h>
#include<stdlib.h>
#define years 2022
#define pi 53563.1415
int main()
{
    printf("/0123456789/\n");
    printf("/%2d/\n",years);//兩個欄位，但輸出四個，故自動填補 
    printf("/%10d/\n",years);//十個欄位，輸入四個，剩餘六個由左補空白 
    printf("/%-10d/\n",years);//十個欄位，輸入四個，剩餘六個由右補空白 
    printf("/%5d/\n",years);
    printf("/%-5d/\n",years);
    printf("\n");
	printf("/0123456789/\n");
    printf("/%f/\n",pi);//浮點數輸出 
    printf("/%e/\n",pi);//5.356314e+004表示5.356314e+004X10的4次方 
    printf("/%4.2f/\n",pi);//四個欄位，小數點後2位
    printf("/%3.1f/\n",pi);//三個欄位，小數點後1位
    printf("/%10.3f/\n",pi);
    printf("/%+4.2f/\n",pi);//+號用來顯示該數字原本的正負值 
    printf("/%010.2f/\n",pi);//十個欄位，小數點後2位，左邊多於用0補齊
    printf("/%10.3e/\n",pi);
    return 0;
}
