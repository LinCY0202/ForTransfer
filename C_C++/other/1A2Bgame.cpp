#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
#include<time.h>
 void oneP(void);
 void twoP(void);
 
 int main(){
	printf("�п�ܹC���Ҧ�:1P or 2P\n");
	char people[3]={0};
	scanf("%s",people);//1P��2P 
	if(people[0]=='1'){	
	oneP();
}
//	if(people[0]=='2'){	
//	twoP(1);
//}
 	return 0;
 }
void oneP(){
	char keep[3]={'Y'};
	while(keep[0]=='Y'||keep[0]=='y'){
 	int temp[10]={0,1,2,3,4,5,6,7,8,9};	
	srand(time(NULL));//���Ͷü� 
 	for(int i=100;i>=0;i--){//���H��4�ӼƦr������ 
		int k=(rand()%10);//�~�P9-13 
		int n=(rand()%10);
 		int s=temp[k];
 		temp[k]=temp[n];
 		temp[n]=s;}
 	for(int i=0;i<=3;i++){//��X�H��������Ʀr 
 		//printf("%d ",temp[i]);
	 }
	 
 	printf("\n");
 	printf("�п�J4��0~9�����ƪ��Ʀr\n");
	
	int x=-1;//�T�{���\�P�_�� 
	
	while(x==-1){
	char number[100]={-1};
	scanf("%s",number);
	int xx=-1;//�P�_�O�_�i�J�C�� 
	if(strlen(number)!=4){//�P�_�O�_��J�W�L�Τp��4��r�� 
	printf("��J�榡���~\n");
	xx=1;
}
	else if(number[0]==number[1]||number[0]==number[2]||number[0]==number[3]||number[1]==number[2]||
	number[1]==number[3]||number[2]==number[3]){
	xx=1;
	printf("�Ʀr���СA�Э��s��J:\n");
}

if(xx==-1){
	int a=0,b=0;
	for(int i=0;i<=3;i++){
		for(int n=0;n<=3;n++){
			if(number[i]-48==temp[i]){
				a++;
				break;
			}
			else if(number[i]-48==temp[n]&&i!=n){
				b++;
				break;
			}
		}
	}
		if(a==4){
		x=0;
		printf("Bingo\n");
		printf("�O�_�A�Ӥ@��?Y/N\n");
		scanf("%s",keep);}
		else{
		printf("���G:A:%d, B:%d	\n",a,b);
		}
 	}	
}
}
}
 
