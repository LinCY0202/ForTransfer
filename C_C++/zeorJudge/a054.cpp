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
//	台北市 A 10   彰化縣 N 22
//台中市 B 11   新竹市 O 35
//基隆市 C 12   雲林縣 P 23
//台南市 D 13   嘉義縣 Q 24
//高雄市 E 14   台南縣 R 25
//台北縣 F 15   高雄縣 S 26
//宜蘭縣 G 16   屏東縣 T 27
//桃園縣 H 17   花蓮縣 U 28
//嘉義市 I 34   台東縣 V 29
//新竹縣 J 18   金門縣 W 32
//苗栗縣 K 19   澎湖縣 X 30
//台中縣 L 20   陽明山 Y 31
//南投縣 M 21   連江縣 Z 33
//	
