#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char str[13]={0},str1[13]={0};

	scanf("%s%s",str,str1);
	while(1){
		int len=strlen(str);
		int len1=strlen(str1);
		int num[13]={0},num1[13]={0};
		int count=0,count1=0;
		for(int i=0;i<len;i++){//锣Θ计 
			if(str[i]=='I')
				num[i]=1;
			else if(str[i]=='V')
				num[i]=5;
			else if(str[i]=='X')
				num[i]=10;
			else if(str[i]=='L')
				num[i]=50;
			else if(str[i]=='C')
				num[i]=100;
			else if(str[i]=='D')
				num[i]=500;
			else
				num[i]=1000;
		}
		for(int i=0;i<len1;i++){//锣Θ计 
			if(str1[i]=='I')
				num1[i]=1;
			else if(str1[i]=='V')
				num1[i]=5;
			else if(str1[i]=='X')
				num1[i]=10;
			else if(str1[i]=='L')
				num1[i]=50;
			else if(str1[i]=='C')
				num1[i]=100;
			else if(str1[i]=='D')
				num1[i]=500;
			else
				num1[i]=1000;
		}
		num[len]=0,num1[len1]=0;

		for(int i=0;i<len;i++){
			if(num[i]>=num[i+1]){
				count+=num[i];
			}
			else{
				count+=num[i+1]-num[i];
				i++; 
			}
		}
		for(int i=0;i<len1;i++){
			if(num1[i]>=num1[i+1]){
				count1+=num1[i];
			}
			else{
				count1+=num1[i+1]-num1[i];
				i++;
			}
		}
		if(count==count1){
			printf("ZERO\n");
		}
		else{
			int count2=0;
			int count3[4]={0};
			
				count2=count-count1;
				count2=abs(count2);
				for(int i=0;count2>0;i++){
					count3[i]=count2%10;
					count2/=10;
				}
				if(count3[3]>0){
					if(count3[3]==1){
						printf("M");
					}
					else if(count3[3]==2){
						printf("MM");
						}
					else if(count3[3]==3){
						printf("MMM");
					}
				}
				if(count3[2]>0){
					if(count3[2]==9){
						printf("CM");
					}
					else if(count3[2]>=6&&count3[2]<=8){
						printf("DC");
						count3[2]-=6;
						while(count3[2]>0){
							printf("C");
							count3[2]--;
						}
					}
					else if(count3[2]==5){
						printf("D");
					}
					else if(count3[2]==4){
						printf("CD");
					}	
					else{
						while(count3[2]>0){
							printf("C");
							count3[2]--;
						}
					}
				}
				if(count3[1]>0){
					if(count3[1]==9){
						printf("XC");
					}
					else if(count3[1]>=6&&count3[1]<=8){
						printf("LX");
						count3[1]-=6;
						while(count3[1]>0){
							printf("X");
							count3[1]--;
						}
					}
					else if(count3[1]==5){
						printf("L");
					}
					else if(count3[1]==4){
						printf("XL");
					}	
					else{
						while(count3[1]>0){
							printf("X");
							count3[1]--;
						}
					}
				}
				if(count3[0]>0){
					if(count3[0]==9){
						printf("IX");
					}
					else if(count3[0]>=6&&count3[0]<=8){
						printf("VI");
						count3[0]-=6;
						while(count3[0]>0){
							printf("I");
							count3[0]--;
						}
					}
					else if(count3[0]==5){
						printf("V");
					}
					else if(count3[0]==4){
						printf("IV");
					}	
					else{
						while(count3[0]>0){
							printf("I");
							count3[0]--;
						}
					}
				}
				printf("\n");
				
			}
		
		scanf("%s",str);
		if(str[0]=='#'){//挡籔 
		break;
		}
		scanf("%s",str1);
		}
		return 0;
} 
//眖程秨﹍
//眖オ-オ常 
//I	1
//V	5
//X	10
//L	50
//C	100
//D	500
//M	1,000

