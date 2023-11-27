#include<Stdio.h>
int main(){
	char word;
	scanf("%c",&word);
	if(word<65||word>122)//判斷是否在英文字母範圍內 
	{
		printf("輸入格式錯誤"); 
	}
		else if(word>90&&word<97)//判斷是否在英文字母範圍內 
	{
			printf("輸入格式錯誤"); 
	}
			else if(word>=65&&word<97)//如果是大寫，轉小寫 
	{
				printf("%c",word+32);//97  65
	}
				else if(word>=97)//如果是小寫，轉大寫 
	{
					printf("%c",word-32);//97  65
	}
	return 0;
} 
