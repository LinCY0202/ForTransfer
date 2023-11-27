#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
#include<time.h>
 void oneP(void);
 void twoP(void);
 
 int main(){
	printf("請選擇遊玩模式:1P or 2P\n");
	char people[3]={0};
	scanf("%s",people);//1P或2P 
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
	srand(time(NULL));//產生亂數 
 	for(int i=100;i>=0;i--){//取隨機4個數字不重複 
		int k=(rand()%10);//洗牌9-13 
		int n=(rand()%10);
 		int s=temp[k];
 		temp[k]=temp[n];
 		temp[n]=s;}
 	for(int i=0;i<=3;i++){//輸出隨機選取的數字 
 		//printf("%d ",temp[i]);
	 }
	 
 	printf("\n");
 	printf("請輸入4個0~9不重複的數字\n");
	
	int x=-1;//確認成功與否用 
	
	while(x==-1){
	char number[100]={-1};
	scanf("%s",number);
	int xx=-1;//判斷是否進入遊戲 
	if(strlen(number)!=4){//判斷是否輸入超過或小於4格字元 
	printf("輸入格式錯誤\n");
	xx=1;
}
	else if(number[0]==number[1]||number[0]==number[2]||number[0]==number[3]||number[1]==number[2]||
	number[1]==number[3]||number[2]==number[3]){
	xx=1;
	printf("數字有覆，請重新輸入:\n");
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
		printf("是否再來一局?Y/N\n");
		scanf("%s",keep);}
		else{
		printf("結果:A:%d, B:%d	\n",a,b);
		}
 	}	
}
}
}
 
