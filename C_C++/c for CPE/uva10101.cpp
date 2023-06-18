#include<stdio.h>
#include<string.h>
//23764
//45897458973958
//400600004090000
// 13 hajar 20 kuti 4 shata 90
// 13 hajar 20 kuti 9 lakh 4 shata 90
//130200900490
char s[4][6]={"kuti","lakh","hajar","shata"};
int  L[4]={7,5,3,2};
int k=1;
int main(){
    char str[20];
	while(scanf("%s",str)!=-1){
		int YorN=1;
        printf("%d. ",k);
        k++;
        int len=strlen(str);
        if(strlen(str)>9){
            len=len-9;
            for(int i=1;len<9&&i<3;i++)
            	len++;
            for(int i=0,j=0;i<4;i++){
                int Nzero=0;
                if(len>L[i]){
                	YorN=0;
                    if(str[j]!='0'){
                        printf("%c",str[j]);
                        j++,len--,Nzero=1;
                    }
                    else{
                        j++,len--;
                    }
                }
                
                if(len>L[i]){
                    if(Nzero==1||str[j]!='0'){
                        printf("%c",str[j]);
                        j++,len--,Nzero=1;
                    }
                    else{
                        j++,len--;
                    }
                }
                if(j>0&&Nzero==1){
                    printf(" %s ",s[i]);
                }
                
            }
        }
        len=strlen(str);
        int before=strlen(str)-9;
        if(len<=9){
            before=0;
        }
        len=len-before;
        if(before>0||len<=9){
            for(int i=0,j=0;i<4;i++){
                int Nzero=0;
                if(len>L[i]){
                    if(str[j+before]!='0'){
                        printf("%c",str[j+before]);
                        j++,len--,Nzero=1;
                    }
                    else{
                        j++,len--;
                    }
                }
                if(len>L[i]){
                    if(Nzero==1||str[j+before]!='0'){
                        printf("%c",str[j+before]);
                        j++,len--,Nzero=1;
                    }
                    else{
                        j++,len--;
                    }
                }
                if(YorN==0&&str[strlen(str)-8]=='0'&&str[strlen(str)-9]=='0'){
                	printf("kuti ");
                	YorN=1;
				}
                else if(j>0&&Nzero==1){
                    printf(" %s ",s[i]);
                }    
            }
            if(strlen(str)<2){
            	printf("%c\n",str[strlen(str)-1]);
			}
            else if(str[strlen(str)-2]=='0'&&str[strlen(str)-1]!='0'){
              printf("%c\n",str[strlen(str)-1]);
            }
            else if(str[strlen(str)-2]!='0'){
              printf("%c%c\n",str[strlen(str)-2],str[strlen(str)-1]);
            }
            else{
            	printf("\n");
			}
        }
	}
    return 0;
}


