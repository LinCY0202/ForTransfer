#include<Stdio.h>
int main(){
	char word;
	scanf("%c",&word);
	if(word<65||word>122)//�P�_�O�_�b�^��r���d�� 
	{
		printf("��J�榡���~"); 
	}
		else if(word>90&&word<97)//�P�_�O�_�b�^��r���d�� 
	{
			printf("��J�榡���~"); 
	}
			else if(word>=65&&word<97)//�p�G�O�j�g�A��p�g 
	{
				printf("%c",word+32);//97  65
	}
				else if(word>=97)//�p�G�O�p�g�A��j�g 
	{
					printf("%c",word-32);//97  65
	}
	return 0;
} 
