#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
#include<time.h>
int main(){
	int array[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int site[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};//������m��
	int x=-1;//�ˬd�C�������P�_ 
	srand(time(NULL));

	for(int i=0;i<500;i++){//����array���� 
		int k=(rand()%16);
		int n=(rand()%16);
		int s=array[k];
		array[k]=array[n];
		array[n]=s;
	}

	for(int i=0;i<16;i++){//�����C�ӼƦr����m 
		int n=0;
		for(int j=0;j<16;j++)
			if(array[j]!=i){
				n++;
			}
			else{
				break;
			}
				
		site[i]=n;	
	}
//	for(int i=0;i<16;i++){
//		printf("%d ",site[i]);
//	}
	while(x==-1){
	
		for(int i=0;i<16;i++){//��X�خe�D�Ʀr 
			if(array[i]==0){
				printf("X   ");
			}
			else if(array[i]<10){
				printf("%d   ",array[i]);
			}
			else{
				printf("%d  ",array[i]);
			}
			if(i==3||i==7||i==11){
				printf("\n");
			}
		}
		
		printf("\n��ܭn���ʪ��Ʀr");
		int number=0;
		scanf("%d",&number);
		int temp=site[number];//�Ʀr��m����T
		int temp1=site[0];
		array[site[0]]=array[site[number]];//�}�C0����m�ܦ���� 
		array[site[number]]=0;//�}�C�Ʀr����m�ܦ�0
		site[0]=temp;
		site[number]=temp1; 
		
	//	for(int i=0;i<16;i++){
	//		printf("%d ",site[i]);
	//	}
		if(array[0]==1&&array[1]==2&&array[2]==3&&array[3]==4&&array[4]==5&&array[5]==6&&array[6]==7&&array[7]==8&&
		array[8]==9&&array[9]==10&&array[10]==11&&array[11]==12&&array[12]==13&&array[13]==14&&array[14]==15&&array[15]==0){
			x=0; 
		printf("\n���ߵ���");
		}
}
	return 0; 
}
