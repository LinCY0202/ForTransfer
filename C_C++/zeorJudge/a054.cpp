#include<stdio.h>
int main(){
	char num[9]={0};
	scanf("%s",num);
	int date[26]={1,0,9,8,7,6,5,4,9,3,2,2,1,0,8,9,8,7,6,5,4,3,1,3,2,0};
	char date1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int count=0;
	for(int i=0,j=8;i<8;i++,j--){
		count+=(num[i]-'0')*j;
	}
	//printf("%d",count);
	for(int i=0;i<26;i++){

		if(10-((count+date[i])%10)==num[8]-'0'){
			printf("%c",date1[i]);
		}	
		else if(num[8]=='0'&&10-((count+date[i])%10)==10){
			printf("%c",date1[i]);
		}
	}
	return 0;
}
//	�x�_�� A 10   ���ƿ� N 22
//�x���� B 11   �s�˥� O 35
//�򶩥� C 12   ���L�� P 23
//�x�n�� D 13   �Ÿq�� Q 24
//������ E 14   �x�n�� R 25
//�x�_�� F 15   ������ S 26
//�y���� G 16   �̪F�� T 27
//��鿤 H 17   �Ὤ�� U 28
//�Ÿq�� I 34   �x�F�� V 29
//�s�˿� J 18   ������ W 32
//�]�߿� K 19   ��� X 30
//�x���� L 20   �����s Y 31
//�n�뿤 M 21   �s���� Z 33
//	
