#include <stdio.h>
#include <string.h>

	char str[100000001]={'\0'};		
int main(){

	fgets(str,100000000,stdin);
	int low=0,high=0;
//gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '){

		}
		else{
						high=i-1;
			if(str[i-1]==' '){
				if((high-low)%2==0){
					printf(" ");
				}
			}
			printf("%c",str[i]);
			low=i+1;
		}
	}
	return 0;
} 
