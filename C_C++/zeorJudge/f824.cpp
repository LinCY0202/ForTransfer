#include<stdio.h>
int main(){
	char str[10];
	while(scanf("%s",str)!=-1){
		if((str[3]=="�S"[0]&&str[4]=="�S"[1]&&str[5]=="�S"[2])||(str[3]=="��"[0]&&str[4]=="��"[1]&&str[5]=="��"[2])){
			int a=0,b=0;
			if(str[0]=="�@"[0]&&str[1]=="�@"[1]&&str[2]=="�@"[2]){
				a=1;
			}
			else if(str[0]=="�G"[0]&&str[1]=="�G"[1]&&str[2]=="�G"[2]){
				a=2;
			}
			else if(str[0]=="�T"[0]&&str[1]=="�T"[1]&&str[2]=="�T"[2]){
				a=3;
			}
			else if(str[0]=="�|"[0]&&str[1]=="�|"[1]&&str[2]=="�|"[2]){
				a=4;
			}
			else if(str[0]=="��"[0]&&str[1]=="��"[1]&&str[2]=="��"[2]){
				a=5;
			}
			else if(str[0]=="��"[0]&&str[1]=="��"[1]&&str[2]=="��"[2]){
				a=6;
			}
			else if(str[0]=="�C"[0]&&str[1]=="�C"[1]&&str[2]=="�C"[2]){
				a=7;
			}
			else if(str[0]=="�K"[0]&&str[1]=="�K"[1]&&str[2]=="�K"[2]){
				a=8;
			}
			else if(str[0]=="�E"[0]&&str[1]=="�E"[1]&&str[2]=="�E"[2]){
				a=9;
			}
			else if(str[0]=="�Q"[0]&&str[1]=="�Q"[1]&&str[2]=="�Q"[2]){
				a=10;
			}
//-------------------------------------------------------------------------
			if(str[6]=="�@"[0]&&str[7]=="�@"[1]&&str[8]=="�@"[2]){
				b=1;
			}
			else if(str[6]=="�G"[0]&&str[7]=="�G"[1]&&str[8]=="�G"[2]){
				b=2;
			}
			else if(str[6]=="�T"[0]&&str[7]=="�T"[1]&&str[8]=="�T"[2]){
				b=3;
			}
			else if(str[6]=="�|"[0]&&str[7]=="�|"[1]&&str[8]=="�|"[2]){
				b=4;
			}
			else if(str[6]=="��"[0]&&str[7]=="��"[1]&&str[8]=="��"[2]){
				b=5;
			}
			else if(str[6]=="��"[0]&&str[7]=="��"[1]&&str[8]=="��"[2]){
				b=6;
			}
			else if(str[6]=="�C"[0]&&str[7]=="�C"[1]&&str[8]=="�C"[2]){
				b=7;
			}
			else if(str[6]=="�K"[0]&&str[7]=="�K"[1]&&str[8]=="�K"[2]){
				b=8;
			}
			else if(str[6]=="�E"[0]&&str[7]=="�E"[1]&&str[8]=="�E"[2]){
				b=9;
			}
			else if(str[6]=="�Q"[0]&&str[7]=="�Q"[1]&&str[8]=="�Q"[2]){
				b=10;
			}
			a=a+b;
			if(a>=10){
				b=a/10; 
				if(b==1){
					printf("�Q");
				}
				else{
					printf("�G�Q");
				}
				a=a-10;
			}
			if(a==1){
				printf("�@");
			}
			if(a==2){
				printf("�G");
			}
			if(a==3){
				printf("�T");
			}
			if(a==4){
				printf("�|");
			}
			if(a==5){
				printf("��");
			}
			if(a==6){
				printf("��");
			}
			if(a==7){
				printf("�C");
			}
			if(a==8){
				printf("�K");
			}
			if(a==9){
				printf("�E");
			}
			printf("\n");		
		}
		else{
			printf("��\n");
		}
	}
	
	return 0;
}
